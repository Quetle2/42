/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:43:50 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/17 13:19:18 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_temhador(char *src)
{
	char	*dest;

	if (!src)
		return (0);
	dest = NULL;
	return (dest);
}

char	*ft_linhador(char *src)
{
	char	*dest;

	if (!src)
		return (0);
	dest = ft_substr(src, 0, ft_strlen(src, 1));
	if (ft_strlen(src, 1) == ft_strlen(src, 0))
		free(src);
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
	printf("Entrou seg\n");
	printf("Malloc seg\n");
	while (!ft_strchr(temp, '\n') && read_ret != 0)
	{
		buff = malloc(BUFFER_SIZE + 1);
		read_ret = (int)read(fd, buff, BUFFER_SIZE);
		if (read_ret == -1)
		{
			free(buff);
			return (0);
		}
		buff[read_ret] = '\0';
		printf("buff :%s\n", buff);
		temp = ft_strjoin(temp, buff);
		free(buff);
		printf("temp :%s\n", temp);
	}
	printf("Read and strjoin seg\n");
	linha = ft_linhador(temp);
	temp = ft_temhador(temp);

	free(buff);
	return (linha);
}
