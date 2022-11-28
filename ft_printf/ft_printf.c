/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:49:03 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/28 17:58:08 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkedid(va_list va_args, const char *str)
{
	int	ret_val;
	t_ll nbr;

	ret_val = 0;
	if (*str == 'c')
		ret_val += ft_putchar_fd(va_arg(va_args, int), 1);
	else if (*str == 's')
		ret_val += ft_putstr_fd(va_arg(va_args, char *), 1);
	else if (*str == 'p')
		ret_val += ft_put_adress(va_arg(va_args, t_ull));
	else if (*str == 'd' || *str == 'i')
	{
		ret_val += ft_put_nbr(va_arg(va_args, t_ll));
	}
	return (ret_val);
}

int	ft_printf(const char *str, ...)
{
	va_list	va_args;
	int		ret_val;

	ret_val = 0;
	va_start(va_args, str);
	while (*str != 0)
	{
		if (*str == '%')
		{
			str++;
			ret_val += ft_checkedid(va_args, str);
			str++;
		}
		else
		{
			ft_putchar_fd(*str++, 1);
			ret_val++;
		}
	}
	return (ret_val);
}
