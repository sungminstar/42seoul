/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:40:27 by sunlim            #+#    #+#             */
/*   Updated: 2023/07/23 14:42:48 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_lower(va_list ap)
{
	unsigned int	data;
	char			*itoapx;
	int				len;

	data = (unsigned int)va_arg(ap, unsigned int);
	itoapx = ft_itoahex(data);
	if (!itoapx)
		return (ERROR);
	len = ft_strlen(itoapx);
	if (write(1, itoapx, len) == ERROR)
	{
		free(itoapx);
		return (ERROR);
	}
	free(itoapx);
	return (len);
}

int	ft_print_upper(va_list ap)
{
	unsigned int	data;
	char			*itoapx;
	int				len;

	data = (unsigned int)va_arg(ap, unsigned int);
	itoapx = ft_itoahexl(data);
	if (!itoapx)
		return (ERROR);
	len = ft_strlen(itoapx);
	if (write(1, itoapx, len) == ERROR)
	{
		free(itoapx);
		return (ERROR);
	}
	free(itoapx);
	return (len);
}
