/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hesap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:45:10 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/09/08 19:10:00 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexapo(size_t n)
{
	int		i;
	int		x;
	char	*hex_digits;
	char	c[16];

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
