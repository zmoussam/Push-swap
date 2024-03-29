/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:10 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 19:42:05 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **stack_dst, t_stack **stack_src, char *inst)
{
	t_stack	*tmp;

	if (*stack_src)
	{
		tmp = *stack_src;
		*stack_src = tmp->next;
		tmp->next = *stack_dst;
		*stack_dst = tmp;
		if (!inst)
			return ;
		get_index(*stack_dst);
		get_index(*stack_src);
		write(1, inst, 3);
	}
}
