/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:57:08 by sunlim            #+#    #+#             */
/*   Updated: 2023/04/27 21:34:41 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t size)
{
	unsigned char	*pdest;

	pdest = dest;
	while (size > 0)
	{
		*pdest = c;
		pdest++;
		size--;
	}
	return (dest);
}
