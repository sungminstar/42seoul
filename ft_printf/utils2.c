/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:16:38 by sunlim            #+#    #+#             */
/*   Updated: 2023/07/23 14:45:02 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nlenhex(unsigned long long n)
{
	int	cnt;

	cnt = 0;
	if (n == 0)
		cnt = 1;
	while (n > 0)
	{
		n /= 16;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoahex(unsigned long long n)
{
	int		end;
	char	*res;
	char	*hex;

	end = ft_nlenhex(n);
	res = (char *)malloc(sizeof(char) * (end + 1));
	if (!res)
		return (0);
	hex = "0123456789abcdef";
	res[end] = '\0';
	if (n == 0)
		res[--end] = '0';
	while (end-- > 0)
	{
		res[end] = hex[n % 16];
		n /= 16;
	}
	return (res);
}

char	*ft_itoahexl(unsigned long long n)
{
	int		end;
	char	*res;
	char	*hex;

	end = ft_nlenhex(n);
	res = (char *)malloc(sizeof(char) * (end + 1));
	if (!res)
		return (0);
	hex = "0123456789ABCDEF";
	res[end] = '\0';
	if (n == 0)
		res[--end] = '0';
	while (end-- > 0)
	{
		res[end] = hex[n % 16];
		n /= 16;
	}
	return (res);
}
