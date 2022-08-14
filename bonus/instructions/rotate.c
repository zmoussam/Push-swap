/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:18 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/14 19:50:09 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rotate(t_stack_b **stack)
{
	t_stack_b	*tmp;
	t_stack_b	*head;

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
	}
}

void	rr(t_stack_b **stack_a, t_stack_b **stack_b)
{
	if ((*stack_a) && (*stack_b))
	{
		rotate(stack_a);
		rotate(stack_b);
	}
}
