/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 21:24:27 by sunlim            #+#    #+#             */
/*   Updated: 2023/04/27 19:29:38 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cntlen(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start + i])
		i++;
	if (i <= len)
		len = i;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (start > ft_strlen(s))
	{
		substr = (char *)malloc(1);
		if (!substr)
			return (0);
		ft_bzero(substr, 1);
		return (substr);
	}
	substr = (char *)malloc(ft_cntlen(s, start, len) + 1);
	if (!substr)
		return (0);
	i = 0;
	while (i < len && start + i < ft_strlen(s))
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = 0;
	return (substr);
}
