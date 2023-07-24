/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:35:38 by sunlim            #+#    #+#             */
/*   Updated: 2023/07/23 14:35:44 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	if (write(1, &c, 1) == ERROR)
		return (ERROR);
	return (1);
}
