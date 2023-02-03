# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tuaktas <tuaktas@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 15:02:35 by tuaktas           #+#    #+#              #
#    Updated: 2022/06/10 14:04:37 by tuaktas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PATH		=	./lib/libft
LIBFT			=	$(LIBFT_PATH)/libft.a

MINILIBX_PATH	=	./lib/mlx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a

SOURCES	=	so_long.c \
					draw.c \
					read_map.c \
					map_check.c \
					game_play.c \
					player_all.c \
					game_init.c \
					exit_game.c \


HEADER			=	so_long.h


OBJECTS			= 	$(SOURCES:.c=.o)

NAME			=	so_long

CC				=	clang
RM				=	rm -f

CFLAGS			=	-Wall -Wextra -Werror
MLXFLAGS		=	-framework AppKit -framework OpenGL -L./lib/mlx -lmlx

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:			$(NAME)

$(NAME):		$(LIBFT) $(MINILIBX) $(OBJECTS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) $(MINILIBX) $(MLXFLAGS) -o $(NAME)

$(LIBFT):
				$(MAKE) -C $(LIBFT_PATH)

$(MINILIBX):
				$(MAKE) -C $(MINILIBX_PATH)

clean:
				$(MAKE) -C $(LIBFT_PATH) clean
				#$(MAKE) -C $(MINILIBX_PATH) clean
				$(RM) $(OBJECTS)

fclean:			clean
				$(MAKE) -C $(LIBFT_PATH) fclean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re libft minilibx
