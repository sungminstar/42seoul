# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunlim <sunlim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 18:23:53 by sunlim            #+#    #+#              #
#    Updated: 2023/07/24 08:53:59 by sunlim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_print_c.c ft_print_diu.c ft_print_p.c ft_print_s.c ft_print_xX.c \
	   utils.c utils2.c

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(MAKE) -C ./libft
	cp	./libft/libft.a $(NAME)
	ar -rc $@ $^

%.o : %.c %.h
	cc $(CFLAGS) -c $< -o $@

clean :
	$(MAKE) -C ./libft clean
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) -C ./libft fclean
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY: all clean fclean re
