/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:29:27 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/12/07 15:46:40 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_ss(t_node **stack)
{
	t_node	*first;
	t_node	*sec;
	int		temp;

	if (f_lstsize((*stack)) < 2)
		return (-1);
	first = *stack;
	sec = first->next;
	temp = first->content;
	first->content = sec->content;
	sec->content = temp;
	return (0);
}

int	sa(t_node **stack)
{
	if (swap_ss(stack) == 0)
		ft_putstr_fd("sa\n", 1);
	return (0);
}

int	sb(t_node **stack)
{
	if (swap_ss(stack) == 0)
		ft_putstr_fd("sb\n", 1);
	return (0);
}

int	ss(t_node **stack_a, t_node **stack_b)
{
	int	result_a;
	int	result_b;

	result_a = swap_ss(stack_a);
	result_b = swap_ss(stack_b);
	if (result_a == 0 || result_b == 0)
		ft_putstr_fd("ss\n", 1);
	return (0);
}
