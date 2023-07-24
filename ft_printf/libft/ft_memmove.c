/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:57:50 by sunlim            #+#    #+#             */
/*   Updated: 2023/04/27 17:46:50 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*str;

	dest = dst;
	str = src;
	if (!dest && !str)
		return (0);
	if (str < dest && dest < (str + len))
	{
		i = len;
		while (i-- > 0)
		{
			dest[i] = str[i];
		}
		return (dest);
	}
	return (ft_memcpy(dst, src, len));
}
