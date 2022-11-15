/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:43:50 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/15 17:01:42 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_temhador(char *src)
{
	char	*dest;

	if (!src)
		retunr (0);
	
	return (dest);
}

char	*ft_linhador(char *src)
{
	char	*dest;

	if (!src)
		return (0);
	dest = ft_substr(src, 0, ft_strlen(src, 1));
	return (dest);
}

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*temp;
	char		*linha;
	int			read_ret;

	if (fd < 0)
		return (0);
	read_ret = 1;
	buff = malloc(BUFFER_SIZE + 1);
	while (!ft_strchr(temp, '\n') && read_ret != 0)
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
	linha = ft_linhador(temp);
	temp = ft_temhador(temp);


	free(buff);
	return (linha);
}
