/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaktas <tuaktas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:38:40 by tuaktas           #+#    #+#             */
/*   Updated: 2022/06/16 15:42:30 by tuaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		kill(atoi(av[1]), SIGUSR1);
}
