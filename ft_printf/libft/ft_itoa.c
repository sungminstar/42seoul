/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:28:41 by sunlim            #+#    #+#             */
/*   Updated: 2023/07/20 18:15:08 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	change_minus(int n)
{
	long long	num;

	num = n;
	if (num < 0)
		return (-num);
	return (num);
}

static int	ft_nlen(int n)
{
	int			len;
	long long	num;

	len = 1;
	num = change_minus(n);
	num /= 10;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	num;
	int			i;
	int			len;

	num = change_minus(n);
	i = 0;
	len = ft_nlen(n);
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (++i <= len)
	{
		if (str[len - i] != '-')
			str[len - i] = (num % 10) + '0';
		num /= 10;
	}
	str[len] = '\0';
	return (str);
}
