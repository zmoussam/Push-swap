/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_inst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:15:45 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/14 21:04:39 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void do_inst(t_stack_b **stack_a, t_stack_b **stack_b, char *inst)
{
	if (!ft_strcmp(inst, "sa\n"))
		swap(*stack_a);
	else if (!ft_strcmp(inst, "sb\n"))
		swap(*stack_b);
	else if (!ft_strcmp(inst, "ss\n"))
		ss(*stack_a, *stack_b);		
	else if (!ft_strcmp(inst, "ra\n"))
		rotate(stack_a);
	else if (!ft_strcmp(inst, "rb\n"))
		rotate(stack_b);
	else if (!ft_strcmp(inst, "rr\n"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(inst, "rra\n"))
		reverse_rotate(stack_a);
	else if (!ft_strcmp(inst, "rrb\n"))
		reverse_rotate(stack_b);
	else if (!ft_strcmp(inst, "rrr\n"))
		rrr(stack_a, stack_b);
	else if (!ft_strcmp(inst, "pa\n"))
		push(stack_a, stack_b);
	else if (!ft_strcmp(inst, "pb\n"))
		push(stack_b, stack_a);
}