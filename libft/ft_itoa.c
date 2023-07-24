/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:28:41 by sunlim            #+#    #+#             */
/*   Updated: 2023/04/27 19:50:44 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int			cnt;
	long long	num;

	cnt = 0;
	num = (long long)n;
	if (num < 0)
	{
		cnt++;
		num = -num;
	}
	if (num == 0)
		cnt = 1;
	while (num > 0)
	{
		num /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			end;
	long long	num;

	end = ft_nlen(n);
	num = (long long)n;
	res = (char *)malloc(sizeof(char) * end + 1);
	if (!res)
		return (0);
	res[end] = 0;
	if (n == 0)
		res[--end] = '0';
	else if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		res[--end] = num % 10 + '0';
		num /= 10;
	}
	return (res);
}	
