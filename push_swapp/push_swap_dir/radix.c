/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:06:16 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/12/07 15:54:19 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	give_index(t_node *lsta)
{
	t_node	*tmp;
	t_node	*next;
	int		counter;

	tmp = lsta;
	next = lsta;
	while (next)
	{
		counter = 0;
		tmp = lsta;
		while (tmp)
		{
			if ((long)tmp->content <= (long)next->content)
				counter++;
			tmp = tmp->next;
		}
		next->index = counter;
		next = next->next;
	}
}

int	get_max_bits(t_node **stack)
{
	t_node	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->content;
	max_bits = 0;
	while (head)
	{
		if (head->content > max)
			max = head->content;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_pass(t_node **stack_a, t_node **stack_b, int current_bit,
		int size)
{
	t_node	*head_a;
	int		j;

	j = 0;
	while (j++ < size)
	{
		head_a = *stack_a;
		if (((head_a->index >> current_bit) & 1) == 1)
			ra(stack_a);
		else
			pb(stack_b, stack_a);
	}
	while (f_lstsize(*stack_b) != 0)
		pa(stack_b, stack_a);
}

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int	i;
	int	size;
	int	max_bits;

	size = f_lstsize(*stack_a);
	max_bits = get_max_bits(stack_a);
	i = 0;
	give_index(*stack_a);
	while (i < max_bits)
	{
		radix_pass(stack_a, stack_b, i, size);
		i++;
		if (is_sorted(*stack_a))
			break ;
	}
}
