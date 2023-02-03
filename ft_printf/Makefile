# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shopa <samethopa@gmail.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 14:22:39 by shopa             #+#    #+#              #
#    Updated: 2022/02/28 16:09:18 by otokluog         ###   ########.fr        #
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
