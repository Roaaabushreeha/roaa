/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:45:29 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/12/07 15:45:02 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushf(t_node **from, t_node **to)
{
	t_node	*temp;

	if (*from == NULL)
		return ;
	temp = (*from)->next;
	(*from)->next = *to;
	*to = *from;
	*from = temp;
}

void	pa(t_node **stack_b, t_node **stack_a)
{
	pushf(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	pushf(stack_b, stack_a);
	ft_putstr_fd("pb\n", 1);
}
