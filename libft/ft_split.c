/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:42:32 by sunlim            #+#    #+#             */
/*   Updated: 2023/04/27 19:47:23 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	word_cnt(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		while (*s && check_sep(*s, c))
			s++;
		if (*s)
			cnt++;
		while (*s && !check_sep(*s, c))
			s++;
	}
	return (cnt);
}

static char	*ft_word_dup(const char *s, char c)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	i = 0;
	while (s[len] && !check_sep(s[len], c))
		len++;
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_free(char	**list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (word_cnt(s, c) + 1));
	if (!res)
		return (0);
	while (s[i])
	{
		while (s[i] && check_sep(s[i], c))
			i++;
		if (s[i])
		{
			res[j] = ft_word_dup(s + i, c);
			if (res[j] == 0)
				return (ft_free(res));
			j++;
		}
		while (s[i] && !check_sep(s[i], c))
			i++;
	}
	res[j] = 0;
	return (res);
}
