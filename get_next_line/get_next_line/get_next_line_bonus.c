/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusta <yusta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 03:44:54 by yusta             #+#    #+#             */
/*   Updated: 2022/03/01 03:45:29 by yusta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*my_str[4096];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	my_str[fd] = readandtake(fd, my_str[fd]);
	if (!my_str[fd])
		return (NULL);
	line = new_line(my_str[fd]);
	my_str[fd] = my_new_str(my_str[fd]);
	return (line);
}
