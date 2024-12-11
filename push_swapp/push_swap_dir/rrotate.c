/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:23:35 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/12/07 15:45:55 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse(t_node **stack)
{
	t_node	*last;
	t_node	*prev;

	if (f_lstsize(*stack) < 2)
		return (-1);
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
	return (1);
}

int	rra(t_node **stack_a)
{
	reverse(stack_a);
	ft_putstr_fd("rra\n", 1);
	return (0);
}

int	rrb(t_node **stack_b)
{
	reverse(stack_b);
	ft_putstr_fd("rrb\n", 1);
	return (0);
}

int	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse(stack_a);
	reverse(stack_b);
	ft_putstr_fd("rrr\n", 1);
	return (0);
}
