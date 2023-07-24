/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 13:16:01 by sunlim            #+#    #+#             */
/*   Updated: 2023/07/23 13:15:50 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nlen(long long int num)
{
	int	cnt;

	cnt = 0;
	if (num == 0)
		cnt = 1;
	else if (num < 0)
	{
		cnt++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_uitoa(unsigned int n)
{
	char	*res;
	int		end;

	end = ft_nlen(n);
	res = (char *)malloc(sizeof(char) * (end + 1));
	if (!res)
		return (0);
	res[end] = '\0';
	while (end-- > 0)
	{
		res[end] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
