/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaktas <tuaktas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:12:50 by tuaktas           #+#    #+#             */
/*   Updated: 2022/06/10 11:36:02 by tuaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	xpm_to_img(t_game *game)
{
	game->img_back = mlx_xpm_file_to_image
		(game->mlx, "./images/0.xpm", &game->img_w, &game->img_h);
	game->img_wall = mlx_xpm_file_to_image
		(game->mlx, "./images/1.xpm", &game->img_w, &game->img_h);
	game->img_collect = mlx_xpm_file_to_image
		(game->mlx, "./images/C.xpm", &game->img_w, &game->img_h);
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, "./images/E1.xpm", &game->img_w, &game->img_h);
	game->img_player = mlx_xpm_file_to_image
		(game->mlx, "./images/PD.xpm", &game->img_w, &game->img_h);
}

void	window_size(t_game *game)
{
	int	i;

	i = 0;
	i = ft_strlen(game->map[i]) - 1;
	game->map_h = i * 40;
	i = 0;
	i = ft_strlen(&game->map[0][i]) - 1;
	game->map_w = i * 40;
}

void	game_init(t_game *game)
{
	game->endgame = 0;
	game->moves = 0;
	game->mlx = mlx_init();
	window_size(game);
	game->win = mlx_new_window
		(game->mlx, game->map_w, game->map_h, "So_Long");
	xpm_to_img(game);
	map_draw(game);
}
