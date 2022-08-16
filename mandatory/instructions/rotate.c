/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:18 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 16:18:28 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **stack, char *inst)
{
	t_stack	*tmp;
	t_stack	*head;

	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		head = *stack;
		while (head)
		{
			if (head->next == NULL)
			{
				*stack = tmp->next;
				head->next = tmp;
				tmp->next = NULL;
				break ;
			}
			head = head->next;
		}
		get_index(*stack);
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
