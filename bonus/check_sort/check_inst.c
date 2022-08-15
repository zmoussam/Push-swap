/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:14:12 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 00:25:45 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	check_inst(char *inst)
{
	if (ft_strcmp(inst, "sa\n") && ft_strcmp(inst, "sb\n")
		&& ft_strcmp(inst, "ss\n") && ft_strcmp(inst, "ra\n") \
		&& ft_strcmp(inst, "rb\n") && ft_strcmp(inst, "rr\n") \
		&& ft_strcmp(inst, "rra\n") && ft_strcmp(inst, "rrb\n") \
		&& ft_strcmp(inst, "rrr\n") && ft_strcmp(inst, "pa\n") \
		&& ft_strcmp(inst, "pb\n"))
		print_error();
}
