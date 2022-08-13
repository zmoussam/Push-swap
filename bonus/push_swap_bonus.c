/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:41:49 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/13 23:43:39 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc > 1)
	{
		arg_isdigit(argv, argc);
		stack_a = empiler(argv, argc);
		is_repeat(stack_a);
		if (check_is_sort(stack_a))
			exit(0);
	}
}