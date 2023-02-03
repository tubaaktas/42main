# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tuaktas <tuaktas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 09:42:51 by tuaktas           #+#    #+#              #
#    Updated: 2022/03/07 15:50:18 by tuaktas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CCFLAG = -Wall -Wextra -Werror

list = ft_putchar_d.c ft_puthex.c ft_putchar_p.c ft_putchar_s.c ft_putchar.c ft_putchar_u.c ft_uitoa.c ft_putchar_x.c ft_printf.c

OBJS = $(list:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re
