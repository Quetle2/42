/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:50:42 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/02 11:20:11 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_tamnhoplavra(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	return (i);
}

size_t	ft_ctp(char const *s, char c)
{
	size_t	i;
	size_t	ctp;

	i = 0;
	ctp = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		ctp++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (ctp);
}

char	**ft_putmatrix(char **matrix, char const *s, char c, size_t	ctp)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s == c)
		s++;
	while (ctp)
	{
		matrix[j] = (char *)malloc(sizeof(char) * ft_tamnhoplavra(s, c));
		while (*s && *s != c)
		{
			matrix[j][i] = *s;
			i++;
			s++;
		}
		matrix[j][i] = '\0';
		while (*s == c)
			s++;
		j++;
		i = 0;
		ctp--;
	}
	matrix[j] = 0;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	sep;
	size_t	i;

	i = 0;
	sep = 0;
	if (!s)
		return (0);
	while (s[i++])
		if (s[i] == c)
			sep++;
	matrix = (char **)malloc(sizeof(char *) * ft_ctp(s, c) + 1);
	if (!matrix)
		return (0);
	return (ft_putmatrix(matrix, s, c, ft_ctp(s, c)));
}
