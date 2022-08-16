/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:14:12 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 23:04:26 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	check_inst(char *inst, t_stack_b **stack_a, t_stack_b **stack_b)
{
	if (ft_strcmp(inst, "sa\n") && ft_strcmp(inst, "sb\n")
		&& ft_strcmp(inst, "ss\n") && ft_strcmp(inst, "ra\n") \
		&& ft_strcmp(inst, "rb\n") && ft_strcmp(inst, "rr\n") \
		&& ft_strcmp(inst, "rra\n") && ft_strcmp(inst, "rrb\n") \
		&& ft_strcmp(inst, "rrr\n") && ft_strcmp(inst, "pa\n") \
		&& ft_strcmp(inst, "pb\n"))
	{
		print_error();
		ft_lstclear(stack_a);
		ft_lstclear(stack_b);
		exit(0);
	}
}
