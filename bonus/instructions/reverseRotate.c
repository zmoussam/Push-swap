/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:14 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/14 19:49:31 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	reverse_rotate(t_stack_b **stack)
{
	t_stack_b	*head;
	t_stack_b	*tmp;

	if (*stack)
	{
		head = *stack;
		while (head)
		{
			if (head->next->next == NULL)
			{
				tmp = head->next;
				head->next = NULL;
				tmp->next = *stack;
				*stack = tmp;
				break ;
			}
			head = head->next;
		}
	}
}

void	rrr(t_stack_b **stack_a, t_stack_b **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
