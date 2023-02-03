/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaktas <tuaktas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:24:09 by tuaktas           #+#    #+#             */
/*   Updated: 2022/06/10 11:20:35 by tuaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	av_check(char *av)
{
	int	i;

	i = 0;
	if (!av){
		write(1,"av_check",8);
		return (0);

	}
	while (av[i] != '\0')
		i++;
	i = i - 1;
	if (av[i] == 'r' && av[i - 1] == 'e'
		&& av[i - 2] == 'b' && av[i - 3] == '.')
		{
			write(1,"av_check",8);
			return (1);
		}
			write(1,"av_check",8);

	return (0);
}

int	main(int ac, char **av)
{
	t_game	game;

	if (ac == 2)
	{
		write(1,"girdi\n",6);
		game.map = read_map(av[1]);
		write(1,"girdi\n",6);
		if (map_check(&game) && av_check(av[1]))
		{
		write(1,"girdi\n",6);
			game_init(&game);
			game_play(&game);
			mlx_loop(game.mlx);
		}
	}
}
