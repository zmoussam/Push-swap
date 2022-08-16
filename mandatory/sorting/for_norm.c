/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_norm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:15:23 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 18:40:32 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	for_norm4(t_stack **stack_a, t_stack **stack_b, t_stack *head)
{
	int	index;
	int	i;

	i = 0;
	index = head->index;
	if (head->index == 3)
	{
		reverse_rotate(stack_a, "rra\n");
		if (check_is_sort(*stack_a))
			return ;
	}
	else
		while (i++ < index)
			rotate(stack_a, "ra\n");
	if (check_is_sort(*stack_a))
		return ;
	push(stack_b, stack_a, "pb\n");
	sort_size3(stack_a);
	push(stack_a, stack_b, "pa\n");
	return ;
}

void	for_norm5_1(t_stack **stack_a, t_stack **stack_b, t_stack *head)
{
	int	index;
	int	i;

	i = 0;
	index = head->index;
	while (i++ < 5 - index)
		reverse_rotate(stack_a, "rra\n");
	if (check_is_sort(*stack_a))
		return ;
	push(stack_b, stack_a, "pb\n");
	sort_size4(stack_a, stack_b);
	push(stack_a, stack_b, "pa\n");
	return ;
}

void	for_norm5_2(t_stack **stack_a, t_stack **stack_b, t_stack *head)
{
	int	i;
	int	index;

	i = 0;
	index = head->index;
	while (i++ < index)
		rotate(stack_a, "ra\n");
	if (check_is_sort(*stack_a))
		return ;
	push(stack_b, stack_a, "pb\n");
	sort_size4(stack_a, stack_b);
	push(stack_a, stack_b, "pa\n");
	return ;
}
