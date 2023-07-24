/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 21:54:49 by sunlim            #+#    #+#             */
/*   Updated: 2023/04/27 21:30:49 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	char	*newstr;
	int		i;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (size1 + size2) + 1);
	if (!newstr)
		return (0);
	i = 0;
	while (*s1)
	{
		newstr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		newstr[i] = *s2;
		i++;
		s2++;
	}
	newstr[i] = 0;
	return (newstr);
}
