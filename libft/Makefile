# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tuaktas <tuaktas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 00:15:27 by tuaktas           #+#    #+#              #
#    Updated: 2022/02/28 10:18:59 by tuaktas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	:= libft.a
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -I. -c
FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "*.c")
OBJ		:= $(FILES:%.c=%.o)

BSRC	:= $(wildcard ft_lst*.c)
B_OBJ	:= $(BSRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(B_OBJ)
	ar -rcs $(NAME) $(B_OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus
bonus: $(OBJ) $(B_OBJ)
	ar -rc $(NAME) $(OBJ) $(B_OBJ)
clean: 
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
