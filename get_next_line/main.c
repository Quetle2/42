/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:22:42 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/21 14:47:12 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/wait.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*result;

	fd = open("testo.txt", O_RDONLY);
	// printf("Open seg\nfd :%i\n", fd);
	result = get_next_line(fd);
	printf("string final :%s\n", result);
	free(result);
	result = get_next_line(fd);
	printf("string final :%s\n", result);
	free(result);
	if (BUFFER_SIZE > 100)
	{
		char	*temp;
		do
	{
		temp = get_next_line(fd);
		free(temp);
	}
	while (temp != NULL);
	printf("string final null:%s\n", temp);
	free(temp);
}
close(fd);
	fd = open("testo.txt", O_RDONLY);
	result = get_next_line(fd);
printf("string final 4:%s\n", result);
free(result);
	result = get_next_line(fd);
printf("string final :%s\n", result);
free(result);
	result = get_next_line(fd);
printf("string final :%s\n", result);
free(result);
	result = get_next_line(fd);
printf("string final :%s\n", result);
free(result);
	result = get_next_line(fd);
printf("string final :%s\n", result);
free(result);
	// result = get_next_line(fd);
	// printf("string final :%s\n", result);
}
