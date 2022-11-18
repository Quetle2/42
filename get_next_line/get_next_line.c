/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:43:50 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/18 15:26:05 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_temhador(char *src)
{
	char	*dest;
	int		i;
	int		e;

	e = ft_strlen(src, 1);
	i = 0;
	if (!src[e])
	{
		free(src);
		return (0);
	}
	dest = malloc(ft_strlen(src, 0) - e + 1);
	dest[ft_strlen(src, 0) - e] = '\0';
	while (src[e])
		dest[i++] = dest[e++];
	free(src);
	return (dest);
}

char	*ft_linhador(char *src)
{
	char	*dest;

	if (!src[0])
		return (0);
	dest = ft_substr(src, 0, ft_strlen(src, 1) + 1);
	return (dest);
}

char	*ft_free(char *res, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(res, buffer);
	free(res);
	return (temp);
}

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*temp;
	char		*linha;
	int			read_ret;

	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
		return (0);
	read_ret = 1;
	// printf("Entrou seg\n");
	// printf("Malloc seg\n");
	if (!temp)
	{
		temp = malloc(1);
		temp[0] = '\0';
	}
	buff = malloc(BUFFER_SIZE + 1);
	while (!ft_strchr(temp, '\n') && read_ret != 0)
	{
		read_ret = (int)read(fd, buff, BUFFER_SIZE);
		if (read_ret == -1)
		{
			free(buff);
			return (0);
		}
		buff[read_ret] = '\0';
		// printf("buff :%s\n", buff);
		temp = ft_free(temp, buff);
		// printf("temp :%s\n", temp);
	}
	free(buff);
	// printf("Read and strjoin seg\n");
	linha = ft_linhador(temp);
	temp = ft_temhador(temp);
	return (linha);
}
