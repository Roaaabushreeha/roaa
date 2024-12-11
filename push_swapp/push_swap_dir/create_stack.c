/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:41:17 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/12/07 15:09:57 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_node **stack, int num)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (errorcheck());
	new_node->content = num;
	new_node->next = *stack;
	*stack = new_node;
	return (0);
}

void	freestack(t_node **stack)
{
	t_node	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	*stack = NULL;
}

int	is_sorted(t_node *stack_a)
{
	t_node	*cur;

	cur = stack_a;
	while (cur != NULL && cur->next != NULL)
	{
		if (cur->content > cur->next->content)
		{
			return (0);
		}
		cur = cur->next;
	}
	return (1);
}
