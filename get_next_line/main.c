/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:22:42 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/17 13:10:37 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define O_RDONLY 02
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
	printf("Open seg\nfd :%i\n", fd);
	result = get_next_line(fd);
	printf("string final :%s\n", result);
}
