/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:21 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/14 19:51:04 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	swap(t_stack_b *stack)
{
	if (stack && stack->next)
		ft_swap(&stack->data, &stack->next->data);
}

void	ss(t_stack_b *stack_a, t_stack_b *stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
