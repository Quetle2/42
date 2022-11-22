/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:54:26 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/22 12:13:55 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AD3D4B49_FD4A_4A09_A6F6_86AE1BAC7480
#define AD3D4B49_FD4A_4A09_A6F6_86AE1BAC7480

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char const *str1, char const *str2);
size_t	ft_strlen(const char *str, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_substr(char const *str, unsigned int start, size_t len);
void	*ft_calloc(size_t noob, size_t size);

#endif


#endif /* AD3D4B49_FD4A_4A09_A6F6_86AE1BAC7480 */
