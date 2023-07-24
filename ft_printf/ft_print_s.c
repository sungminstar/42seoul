/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:35:55 by sunlim            #+#    #+#             */
/*   Updated: 2023/07/23 14:36:26 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(va_list ap)
{
	char	*s;

	s = (char *)va_arg(ap, char *);
	if (s == NULL)
	{
		if (write(1, "(null)", 6) == ERROR)
			return (ERROR);
		else
			return (6);
	}
	if (write(1, s, ft_strlen(s)) == ERROR)
		return (ERROR);
	return (ft_strlen(s));
}
