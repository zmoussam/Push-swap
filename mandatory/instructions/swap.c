/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:21 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/13 18:28:35 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack *stack, char *inst)
{
	if (stack && stack->next)
	{
		ft_swap(&stack->data, &stack->next->data);
		ft_swap(&stack->range, &stack->next->range);
		if (!inst)
			return ;
		write(1, inst, 3);
	}
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a, NULL);
	swap(stack_b, NULL);
	write(1, "ss\n", 3);
}
