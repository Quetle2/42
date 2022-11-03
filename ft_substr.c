/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:36:56 by miandrad          #+#    #+#             */
/*   Updated: 2022/10/28 13:16:31 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	if (!str)
		return (0);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (str[start] && i < len && start < ft_strlen(str))
	{
		p[i] = str[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
