/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaktas <tuaktas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:50:13 by tuaktas           #+#    #+#             */
/*   Updated: 2022/06/10 13:58:42 by tuaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "lib/mlx/mlx.h"
# include "lib/libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

enum
{
	KEY_ESC = 53,
	KEY_W = 13,
	KEY_A = 0,
	KEY_S = 1,
	KEY_D = 2
};

typedef struct s_game
{
	void	*mlx;
	void	*win;
	void	*img_back;
	void	*img_wall;
	void	*img_player;
	void	*img_collect;
	void	*img_exit;
	char	**map;
	int		map_w;
	int		map_h;
	int		img_h;
	int		img_w;
	int		n_collect;
	int		n_player;
	int		n_exit;
	int		x_player;
	int		y_player;
	int		moves;
	int		endgame;
}	t_game;

void	img_draw(t_game *game, void *image, int x, int y);
int		map_draw(t_game *game);
void	game_init(t_game *game);
char	**read_map(char *path);
int		map_check(t_game *game);
int		exit_game(t_game *game);
void	game_play(t_game *game);
void	player_w(t_game *game);
void	player_s(t_game *game);
void	player_d(t_game *game);
void	player_a(t_game *game);

#endif
