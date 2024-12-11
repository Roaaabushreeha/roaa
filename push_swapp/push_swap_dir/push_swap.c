/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:19:33 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/12/10 19:10:31 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_stack(t_node **stack_a, t_node **stack_b)
{
	int	size;

	if (!stack_a || !(*stack_a))
	{
		errorcheck();
		return (0);
	}
	size = f_lstsize(*stack_a);
	if (size == 0)
	{
		errorcheck();
		return (0);
	}
	else if (size == 2 && !is_sorted(*stack_a))
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
	return (1);
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**numbers;
	char	*join;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (write(2, "ERROR\n", 6));
	join = ft_strjoin_new(argc, argv, " ");
	numbers = ft_split(join, ' ');
	free(join);
	if (!initialize_stacks(numbers, &stack_a))
		return (0);
	fre_split(numbers);
	if (is_sorted(stack_a))
		return (0);
	give_index(stack_a);
	sort_stack(&stack_a, &stack_b);
	freestack(&stack_a);
	freestack(&stack_b);
	return (0);
}

int	initialize_stacks(char **argv, t_node **stack_a)
{
	int	num;
	int	i;

	i = 0;
	while (argv[i] != NULL)
		i++;
	while (i-- > 0)
	{
		if (!is_right(ft_atoi(argv[i]), argv[i]))
		{
			freestack(stack_a);
			return (0);
		}
		num = ft_atoi(argv[i]);
		push(stack_a, num);
	}
	if (!checkdouble(stack_a))
	{
		freestack(stack_a);
		return (0);
	}
	return (1);
}
