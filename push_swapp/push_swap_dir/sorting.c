/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:52:18 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/12/07 15:46:21 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_position_t(t_node **stack, int value)
{
	int		pos;
	t_node	*current;

	pos = 0;
	current = *stack;
	while (current)
	{
		if (current->content == value)
			return (pos);
		current = current->next;
		pos++;
	}
	return (-1);
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	t_node	*cur;
	int		min;

	cur = *stack_a;
	min = cur->content;
	while (cur)
	{
		if (min > cur->content)
			min = cur->content;
		cur = cur->next;
	}
	while ((*stack_a)->content != min)
	{
		if (find_position_t(stack_a, min) <= 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_b, stack_a);
	sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_four(t_node **stack_a, t_node **stack_b)
{
	int	min_pos;

	min_pos = positionmin(*stack_a);
	if (min_pos == 1)
		ra(stack_a);
	else if (min_pos == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_pos == 3)
		rra(stack_a);
	pb(stack_b, stack_a);
	sort_three(stack_a);
	pa(stack_b, stack_a);
}

int	sort_three(t_node **stack_a)
{
	int	max_p;
	int	num;

	if (is_sorted(*stack_a))
		return (0);
	max_p = positionmax(*stack_a);
	num = 0;
	if (max_p == 0)
		ra(stack_a);
	else if (max_p == 1)
	{
		sa(stack_a);
		ra(stack_a);
	}
	if ((stack_a) && (*stack_a)->next)
	{
		num = (*stack_a)->content > (*stack_a)->next->content;
		if (num == 1)
			sa(stack_a);
	}
	return (0);
}
