/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:13:49 by sunlim            #+#    #+#             */
/*   Updated: 2023/07/23 14:35:30 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(const	char *str, va_list ap)
{
	if (*str == 'c')
		return (ft_print_c(ap));
	else if (*str == 's')
		return (ft_print_s(ap));
	else if (*str == 'p')
		return (ft_print_p(ap));
	else if (*str == 'd' || *str == 'i')
		return (ft_print_di(ap));
	else if (*str == 'u')
		return (ft_print_u(ap));
	else if (*str == 'x')
		return (ft_print_lower(ap));
	else if (*str == 'X')
		return (ft_print_upper(ap));
	else if (*str == '%')
	{
		if (write(1, "%", 1) == ERROR)
			return (ERROR);
		return (1);
	}
	else
		return (ERROR);
}

int	ft_check(const char *str, va_list ap)
{
	int	i;
	int	type_len;

	if (!str)
		return (ERROR);
	i = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			type_len = ft_check_type(str, ap);
			if (type_len == -1)
				return (ERROR);
			i += type_len;
		}
		else
		{
			if (write(1, str, 1) == ERROR)
				return (ERROR);
			i++;
		}
		str++;
	}
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		res;

	res = 0;
	va_start(ap, str);
	res = ft_check(str, ap);
	va_end(ap);
	return (res);
}
