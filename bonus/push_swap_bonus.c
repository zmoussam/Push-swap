/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:41:49 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/14 20:15:04 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void check_inst(char *inst)
{
	if(ft_strcmp(inst, "sa\n") && ft_strcmp(inst, "sb\n")
	 && ft_strcmp(inst, "ss\n") && ft_strcmp(inst, "ra\n") \
	 && ft_strcmp(inst, "rb\n") && ft_strcmp(inst, "rr\n") \
	 && ft_strcmp(inst, "rra\n") && ft_strcmp(inst, "rrb\n") \
	 && ft_strcmp(inst, "rrr\n") && ft_strcmp(inst, "pa\n") \
	 && ft_strcmp(inst, "pb\n"))
	 print_error();
}

int	main(int argc, char **argv)
{
	t_stack_b	*stack_a;
	t_stack_b	*stack_b;
	char *inst;
	

	if (argc > 1)
	{
		arg_isdigit(argv, argc);
		stack_a = empiler(argv, argc);
		is_repeat(stack_a);
		inst = get_next_line(0);
		while(inst)
		{
			check_inst(inst);
			do_inst(&stack_a, &stack_b, inst);
			inst = get_next_line(0);
		}
		if(check_is_sort(stack_a) || !stack_b)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);		
	}
}