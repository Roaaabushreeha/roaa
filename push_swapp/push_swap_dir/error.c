/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:27:14 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/12/07 18:55:59 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	errorcheck(void)
{
	ft_putstr_fd("ERROR\n", 2);
	return (0);
}

int	is_right(int num, char *s)
{
	int	i;

	i = 0;
	if (!s || !*s)
		return (0);
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
		{
			errorcheck();
			return (0);
		}
		i++;
	}
	if (s[0] == '+')
		return (1);
	if (ft_strlen(s) != lenst(num))
	{
		errorcheck();
		return (0);
	}
	return (1);
}

int	checkdouble(t_node **stack)
{
	t_node	*cur;
	t_node	*check;

	cur = *stack;
	while (cur != NULL)
	{
		check = cur->next;
		while (check != NULL)
		{
			if (cur->content == check->content)
			{
				errorcheck();
				return (0);
			}
			check = check->next;
		}
		cur = cur->next;
	}
	return (1);
}
