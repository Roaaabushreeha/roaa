/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:05:42 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/12/07 15:12:16 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_node *stack)
{
	int		max_value;
	t_node	*current;

	if (stack == NULL)
	{
		return (-1);
	}
	max_value = stack->content;
	current = stack->next;
	while (current != NULL)
	{
		if (current->content > max_value)
		{
			max_value = current->content;
		}
		current = current->next;
	}
	return (max_value);
}

int	find_min(t_node *stack)
{
	int		min_value;
	t_node	*current;

	if (stack == NULL)
		return (-1);
	min_value = stack->content;
	current = stack->next;
	while (current != NULL)
	{
		if (current->content < min_value)
		{
			min_value = current->content;
		}
		current = current->next;
	}
	return (min_value);
}

int	positionmin(t_node *stack)
{
	int		min_value;
	int		position;
	int		index;
	t_node	*current;

	position = 0;
	index = 0;
	min_value = find_min(stack);
	current = stack;
	position = 0;
	index = 0;
	while (current != NULL)
	{
		if (current->content == min_value)
		{
			position = index;
			break ;
		}
		current = current->next;
		index++;
	}
	return (position);
}

int	positionmax(t_node *stack)
{
	int		max_value;
	t_node	*current;
	int		position;
	int		index;

	position = 0;
	index = 0;
	max_value = find_max(stack);
	current = stack;
	position = 0;
	index = 0;
	while (current != NULL)
	{
		if (current->content == max_value)
		{
			position = index;
			break ;
		}
		current = current->next;
		index++;
	}
	return (position);
}
