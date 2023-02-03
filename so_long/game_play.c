/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_play.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaktas <tuaktas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:23:22 by tuaktas           #+#    #+#             */
/*   Updated: 2022/06/10 14:15:34 by tuaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	game_events(int keycode, t_game *game)
{
	if (keycode == 13)
	{
		game->y_player -= 1;
		player_w(game);
	}
	else if (keycode == 1)
	{
		game->y_player += 1;
		player_s(game);
	}
	else if (keycode == 2)
	{
		game->x_player += 1;
		player_d(game);
	}
	else if (keycode == 0)
	{
		game->x_player -= 1;
		player_a(game);
	}
}

static int	keypress(int keycode, t_game *game)
{
	if (keycode == 53)
		exit_game(game);
	if (game->endgame == 0)
	{
		game_events(keycode, game);
		printf("Key Moves : %d\n", game->moves);
		printf("collect  : %d\n", game->n_collect);
	}
	return (0);
}

void	game_play(t_game *game)
{
	mlx_hook(game->win, 2, 0, keypress, game);
	mlx_hook(game->win, 17, 0, exit_game, game);
	mlx_hook(game->win, 12, 0, map_draw, game);
}
