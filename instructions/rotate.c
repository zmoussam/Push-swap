/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:18 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/13 18:28:23 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **stack, char *inst)
{
	int		size;
	t_stack	*tmp;
	t_stack	*head;

	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		head = *stack;
		size = ft_lstsize(*stack);
		while (head)
		{
			if (head->next == NULL)
			{
				*stack = tmp->next;
				head->next = tmp;
				tmp->next = NULL;
				break ;
			}
			head->index -= 1;
			head = head->next;
		}
		head->index -= 1;
		head->next->index = size - 1;
		if (!inst)
			return ;
		write(1, inst, 3);
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a) && (*stack_b))
	{
		rotate(stack_a, NULL);
		rotate(stack_b, NULL);
		write(1, "rr\n", 3);
	}
}
