/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsi_putnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 08:19:57 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/09/10 09:23:42 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd_u(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_putnbr_fd_u(n / 10);
	len += ft_putchar_fd((n % 10 + '0'), 1);
	return (len);
}

int	hexa_up(unsigned int n)
{
	int		i;
	int		x;
	char	*hex_digits;
	char	c[9];

	hex_digits = "0123456789ABCDEF";
	i = 0;
	x = 0;
	if (n == 0)
	{
		return (write(1, "0", 1));
	}
	while (n > 0)
	{
		c[i] = hex_digits[n % 16];
		n /= 16;
		i++;
	}
	x = i;
	while (i-- != 0)
	{
		write(1, &c[i], 1);
	}
	return (x);
}

int	hexa_low(unsigned int n)
{
	int		i;
	int		x;
	char	*hex_digits;
	char	c[9];

	hex_digits = "0123456789abcdef";
	i = 0;
	x = 0;
	if (n == 0)
	{
		return (write(1, "0", 1));
	}
	while (n > 0)
	{
		c[i] = hex_digits[n % 16];
		n /= 16;
		i++;
	}
	x = i;
	while (i-- != 0)
	{
		write(1, &c[i], 1);
	}
	return (x);
}

int	pointer(unsigned long c)
{
	int	i;

	i = 0;
	if (!c)
	{
		return (write(1, "(nil)", 5));
	}
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	i += hexapo(c);
	return (i + 2);
}
