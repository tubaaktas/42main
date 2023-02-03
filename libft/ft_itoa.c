/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaktas <tuaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:20:03 by tuaktas           #+#    #+#             */
/*   Updated: 2022/02/22 14:23:48 by tuaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_lenght(int c)
{
	int	i;

	i = 0;
	if (c <= 0)
	{
		i = 1;
	}
	while (c)
	{
		i++;
		c = c / 10;
		if (c == 0)
			break ;
	}
	return (i);
}

static char	*converter(int n, int str_len, int num, char *str)
{
	while (str_len >= 0)
	{
		num = n % 10;
		str[str_len--] = num + 48;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		str_len;
	int		num;
	int		sign;
	char	*str;

	str_len = int_lenght(n);
	num = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * str_len + 1);
	if (!str)
		return (0);
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	str[str_len--] = '\0';
	converter(n, str_len, num, str);
	if (sign == -1 && str[0] == '0')
		str[0] = '-';
	return (str);
}
