/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingFunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:30:33 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 19:13:57 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

short	check_is_sort(t_stack *stack)
{
	t_stack	*head;

	head = stack;
	while (head && head->next)
	{
		if (head->data > head->next->data)
			return (0);
		head = head->next;
	}
	return (1);
}

void	sort_short_list(t_stack **stack_a, t_stack **stack_b, int size)
{
	get_range(*stack_a);
	if (size == 1)
		ft_lstclear(stack_a);
	else if (size == 2)
	{
		if ((*stack_a)->data > (*stack_a)->next->data)
			swap(*stack_a, "sa\n");
	}
	else if (size == 3)
		sort_size3(stack_a);
	else if (size == 4)
		sort_size4(stack_a, stack_b);
	else
		sort_size5(stack_a, stack_b);
}

void	sort_size3(t_stack **stack_a)
{
	if ((*stack_a)->data < (*stack_a)->next->data)
	{
		if ((*stack_a)->data > (*stack_a)->next->next->data)
			reverse_rotate(stack_a, "rra\n");
		else
		{
			swap(*stack_a, "sa\n");
			rotate(stack_a, "ra\n");
		}
	}
	else if ((*stack_a)->data < (*stack_a)->next->next->data)
		swap(*stack_a, "sa\n");
	else if ((*stack_a)->next->data < (*stack_a)->next->next->data)
		rotate(stack_a, "ra\n");
	else
	{
		swap(*stack_a, "sa\n");
		reverse_rotate(stack_a, "rra\n");
	}
}

void	sort_size4(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*head;

	head = *stack_a;
	get_range(*stack_a);
	while (head)
	{
		if (head->range == 0)
			for_norm4(stack_a, stack_b, head);
		head = head->next;
	}
}

void	sort_size5(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*head;
	int		index;

	head = *stack_a;
	get_range(*stack_a);
	while (head)
	{
		if (head->range == 0)
		{
			index = head->index;
			if (index > 2)
			{
				for_norm5_1(stack_a, stack_b, head);
				if (check_is_sort(*stack_a))
					return ;
			}
			else
			{
				for_norm5_2(stack_a, stack_b, head);
				if (check_is_sort(*stack_a))
					return ;
			}
		}
		head = head->next;
	}
}
