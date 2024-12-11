/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:42:21 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/12/10 19:26:47 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

typedef struct s_node
{
	struct s_node	*next;
	int				content;
	int				counter;
	int				index;
}					t_node;
int					initialize_stacks(char *argv[], t_node **stack_a);
void				radix_sort(t_node **stack_a, t_node **stack_b);
int					find_position(t_node *head, t_node *target);
int					find_position_t(t_node **stack, int value);
void				freestack(t_node **stack);
int					push(t_node **stack, int num);
int					errorcheck(void);
int					is_right(int num, char *s);
int					swap_ss(t_node **stack);
int					sa(t_node **stack);
int					sb(t_node **stack);
int					ss(t_node **stack_a, t_node **stack_b);
void				printstack(t_node **stack_a);
int					f_lstsize(t_node *head);
int					rotate(t_node **stack);
int					ra(t_node **stack);
int					rb(t_node **stack);
int					rr(t_node **stack_a, t_node **stack_b);
int					rrotate(t_node **stack);
int					rra(t_node **stack);
int					rrb(t_node **stack);
int					rrr(t_node **stack_a, t_node **stack_b);
void				pushf(t_node **from, t_node **to);
void				pa(t_node **stack_b, t_node **stack_a);
void				pb(t_node **stack_a, t_node **stack_b);
int					find_max(t_node *stack);
int					sort_three(t_node **stack_a);
int					positionmax(t_node *stack);
int					positionmin(t_node *stack);
int					find_min(t_node *stack);
void				sort_four(t_node **stack_a, t_node **stack_b);
int					is_sorted(t_node *stack_a);
void				sort_five(t_node **stack_a, t_node **stack_b);
int					get_max_bits(t_node **stack);
int					checkdouble(t_node **stack);
int					sort_stack(t_node **stack_a, t_node **stack_b);
void				radix_pass(t_node **stack_a, t_node **stack_b,
						int current_bit, int size);
void				give_index(t_node *lsta);
void				initializie(int i, t_node *stack_a, t_node *stack_b,
						int argc);
char				*ft_strjoin_new(int size, char **strs, char *sep);
int					calculate_total_len(int size, char **strs, char *sep);
char				**fre_split(char **split);
#endif
