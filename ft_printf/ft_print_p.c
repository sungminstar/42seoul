/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:40:53 by sunlim            #+#    #+#             */
/*   Updated: 2023/07/23 14:41:13 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(va_list ap)
{
	unsigned long long	p;
	char				*itoap;
	int					len;

	p = (unsigned long long)va_arg(ap, void *);
	itoap = ft_itoahex(p);
	if (!itoap)
		return (ERROR);
	len = ft_strlen(itoap);
	if (write(1, "0x", 2) == ERROR)
	{
		free(itoap);
		return (ERROR);
	}
	if (write(1, itoap, len) == ERROR)
	{
		free(itoap);
		return (ERROR);
	}
	free(itoap);
	return (len + 2);
}
