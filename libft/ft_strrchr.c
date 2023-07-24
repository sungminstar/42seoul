/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:18:59 by sunlim            #+#    #+#             */
/*   Updated: 2023/04/27 18:24:18 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	idx;

	idx = ft_strlen(str);
	if ((char)c == 0)
		return ((char *)(str + idx));
	while (--idx >= 0)
	{
		if ((char)*(str + idx) == (char)c)
			return ((char *)(str + idx));
	}
	return (0);
}
