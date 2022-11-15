/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:43:50 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/15 12:48:48 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*temp;
	// char		*linha = NULL;
	int			read_ret;

	if (fd < 0)
		return (0);
	read_ret = 1;
	buff = malloc(BUFFER_SIZE + 1);
	while (!ft_strchr(buff, '\n') && read_ret != 0)
	{
		read_ret = read(fd, buff, BUFFER_SIZE);
		if (read_ret == -1)
		{
			free(buff);
			return (0);
		}
		buff[BUFFER_SIZE + 1] = '\0';
		temp = ft_strjoin(temp, buff);
	}





	return (temp);
}
