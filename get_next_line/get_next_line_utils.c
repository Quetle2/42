/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:54:43 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/18 14:41:46 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str, size_t n)
{
	size_t	i;

	if (n == 1)
	{
		i = 0;
		while (str[i] != '\n' && str[i])
			i++;
		return (i);
	}
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	i;
	char	*p;

	i = 0;
	if (!str1 || !str2)
		return (0);
	p = malloc(ft_strlen(str1, 0) + ft_strlen(str2, 0) + 1);
	if (!p)
		return (0);
	while (*str1 != '\0')
		p[i++] = *str1++;
	while (*str2 != '\0')
		p[i++] = *str2++;
	p[i] = '\0';
	return (p);
}

char	*ft_strchr(const char *str, int c)
{
	if ((char)c == '\0')
		return ((char *)str + ft_strlen(str, 0));
	while (str)
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		else if (*str == 0)
			return (0);
		str++;
	}
	return (0);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	if (!str)
		return (0);
	if (len == 0 || start >= ft_strlen(str, 0))
	{
		p = malloc(1);
		p[i] = '\0';
		return (p);
	}
	if (len <= ft_strlen(str, 0) - start)
		p = malloc(len + 1);
	else
		p = malloc(ft_strlen(str, 0) - start + 1);
	if (!p)
		return (NULL);
	while (str[start] && i < len && start < ft_strlen(str, 0))
		p[i++] = str[start++];
	p[i] = '\0';
	return (p);
}

// apagar

void	ft_bzero(void *b, size_t n)
{
	size_t			a;
	unsigned char	*dest;

	dest = b;
	a = 0;
	while (a++ < n)
		*dest++ = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}