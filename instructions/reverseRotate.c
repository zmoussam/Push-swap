/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:14 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/13 18:28:08 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_stack **stack, char *inst)
{
	t_stack	*head;
	t_stack	*tmp;

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
			head->index += 1;
			head = head->next;
		}
		head->index += 1;
		(*stack)->index = 0;
		if (!inst)
			return ;
		write(1, inst, 4);
	}
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a, NULL);
	reverse_rotate(stack_b, NULL);
	write(1, "rrr\n", 4);
}
