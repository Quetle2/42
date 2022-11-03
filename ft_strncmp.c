/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:25:14 by miandrad          #+#    #+#             */
/*   Updated: 2022/10/27 14:50:22 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (ft_strlen(str1) == 0 || ft_strlen(str2) == 0)
		return ((unsigned char )str1[i] - (unsigned char )str2[i]);
	while (str1[i] && str2[i] && i <= n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char )str1[i] - (unsigned char )str2[i]);
		i++;
	}
	return (0);
}
