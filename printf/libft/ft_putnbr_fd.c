/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:46:41 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/09/08 17:21:35 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lenst(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while ((n != 0))
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	num2;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num / 10 != '\0')
	{
		ft_putnbr_fd(num / 10, fd);
	}
	num2 = (num % 10 + '0');
	write(fd, &num2, 1);
	return (lenst(n));
}
/*int     main()
{
        ft_putnbr(2147483648);
}*/