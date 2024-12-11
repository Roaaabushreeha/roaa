/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:58:53 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/09/08 19:11:16 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

int	ft_putnbr_fd_u(unsigned int n);
int	ft_printf(const char *c, ...);
int	hexa_up(unsigned int n);
int	hexa_low(unsigned int n);
int	pointer(unsigned long c);
int	ft_putchar_fd(char c, int fd);
int	hexapo(size_t n);

#endif