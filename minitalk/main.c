/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaktas <tuaktas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:40:36 by tuaktas           #+#    #+#             */
/*   Updated: 2022/06/16 17:07:32 by tuaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

// struct	sigaction	old_signal;

void	handler(int signal)
{
	char		a;
	static int	i = 7;

	if ( signal == SIGUSR1)
		a = a | a << 1;
	else 
		a = a | a << 0;
	i--;
	
}

int	main()
{
	struct sigaction	act;

	act.sa_flags = SA_SIGINFO;
	act.sa_handler = &handler;
	ft_printf("PID = %d \n", getpid());
	sigaction(SIGUSR1, &act, NULL);
	while (1)
	{
		pause();
	}
	return (0);
}
