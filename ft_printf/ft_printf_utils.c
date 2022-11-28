/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:14:16 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/28 17:53:48 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(t_ll n)
{
	int	count;
	int	i;

	count = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_putstr_fd("-2147483648", 1));
		count += write(1, "-", 1);
		n *= -1;
	}
	i = n;
	if (i > 9)
	{
		ft_put_nbr(i / 10);
		i %= 10;
	}
	ft_putchar_fd(i + '0', 1);
	return (count += ft_len_nbr(n, 10));
}

void	ft_ptr(unsigned long address)
{
	if (address >= 16)
	{
		ft_ptr(address / 16);
		ft_ptr(address % 16);
	}
	else
	{
		if (address < 10)
			ft_putchar_fd(address + '0', 1);
		else
			ft_putchar_fd(address + 'a' - 10, 1);
	}
}

int	ft_len_nbr(t_ull nbr, int div_by)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr = nbr / div_by;
	}
	return (i);
}

int	ft_put_adress(t_ull address)
{
	int	count;

	count = 0;
	if (address < 1)
		count += write(1, "(nil)", 5);
	else
	{
		count += write(1, "0x", 2);
		count += ft_len_nbr(address, 16);
		ft_ptr(address);
	}
	return (count);
}
