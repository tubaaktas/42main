/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaktas <tuaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:41:49 by tuaktas           #+#    #+#             */
/*   Updated: 2022/03/03 09:41:49 by tuaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_s(char *c)
{
	int	len;
	int	a;

	a = 0;
	len = 0;
	if (c == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (c[a] != '\0')
	{
		write (1, &c[a++], 1);
		len++;
	}
	return (len);
}
