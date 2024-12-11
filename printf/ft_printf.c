/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:02:17 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/09/08 17:10:55 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_switch(char c, va_list args);
int	ft_putnbr_fd_u(unsigned int n);

int	ft_printf(const char *c, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, c);
	i = 0;
	count = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '%')
		{
			i++;
			if (c[i] != '\0')
			{
				count += ft_switch(c[i], args);
			}
		}
		else
		{
			write(1, &c[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_switch(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (c == 's')
	{
		return (ft_putstr_fd(va_arg(args, char *), 1));
	}
	else if (c == 'c')
		return ((ft_putchar_fd(va_arg(args, int), 1)));
	else if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'u')
		return (ft_putnbr_fd_u(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (hexa_up(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (hexa_low(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (pointer(va_arg(args, unsigned long)));
	else
		write(1, &c, 1);
	return (0);
}

// int	main(void)
// {
// ft_printf("roaa %d fe  %c %% rr %s %u %i %x %X %p", 'v', 43, "%s", 54,
// 		-98, 45, 6, 45);
//         //ft_printf(" %p %p ", LONG_MIN, LONG_MAX);

// }
