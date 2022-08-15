/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:10 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 00:32:10 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	push(t_stack_b **stack_dst, t_stack_b **stack_src)
{
	t_stack_b	*tmp;

	if (*stack_src)
	{
		tmp = *stack_src;
		*stack_src = tmp->next;
		tmp->next = *stack_dst;
		*stack_dst = tmp;
	}
}
