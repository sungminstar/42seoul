/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:20:43 by sunlim            #+#    #+#             */
/*   Updated: 2023/04/27 18:03:18 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_siz;
	size_t	src_siz;
	size_t	i;

	dst_siz = ft_strlen(dst);
	src_siz = ft_strlen(src);
	i = 0;
	if (!size || size < dst_siz)
		return (size + src_siz);
	while (dst_siz + i < size - 1 && src[i])
	{
		dst[dst_siz + i] = src[i];
		i++;
	}
	dst[dst_siz + i] = 0;
	return (dst_siz + src_siz);
}
