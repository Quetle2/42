/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:54:26 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/15 12:31:30 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE = 1
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char const *str1, char const *str2);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);

#endif