/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:54:26 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/21 17:48:32 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A70628FF_D9BF_4D12_BA61_CB51F1EF32F4
#define A70628FF_D9BF_4D12_BA61_CB51F1EF32F4

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


#endif /* A70628FF_D9BF_4D12_BA61_CB51F1EF32F4 */
