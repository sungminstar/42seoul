/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_diu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:30:45 by sunlim            #+#    #+#             */
/*   Updated: 2023/07/23 14:41:34 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_di(va_list ap)
{
	int		n;
	char	*ditoa;
	int		len;

	n = (int)va_arg(ap, int);
	len = 0;
	if (n == 0)
		return (write(1, "0", 1));
	else
	{
		ditoa = ft_itoa(n);
		if (ditoa == NULL)
			return (ERROR);
		len = ft_strlen(ditoa);
		if (write(1, ditoa, len) == ERROR)
		{
			free(ditoa);
			return (ERROR);
		}
	}
	free(ditoa);
	return (len);
}

int	ft_print_u(va_list ap)
{
	unsigned int	n;
	char			*uitoa;
	int				len;

	n = (unsigned int)va_arg(ap, unsigned int);
	len = 0;
	if (n == 0)
		return (write(1, "0", 1));
	else
	{
		uitoa = ft_uitoa(n);
		if (uitoa == NULL)
			return (ERROR);
		len = ft_strlen(uitoa);
		if (write(1, uitoa, len) == ERROR)
		{
			free(uitoa);
			return (ERROR);
		}
	}
	free(uitoa);
	return (len);
}
