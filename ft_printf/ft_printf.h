/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:18:41 by sunlim            #+#    #+#             */
/*   Updated: 2023/07/24 09:06:23 by sunlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

# ifndef ERROR
#  define ERROR	-1
# endif

int		ft_printf(const char *str, ...);
int		ft_print_c(va_list ap);
int		ft_print_di(va_list ap);
int		ft_print_u(va_list ap);
int		ft_print_p(va_list ap);
int		ft_print_s(va_list ap);
int		ft_print_lower(va_list ap);
int		ft_print_upper(va_list ap);
char	*ft_itoahex(unsigned long long n);
char	*ft_itoahexl(unsigned long long n);
char	*ft_uitoa(unsigned int n);
#endif
