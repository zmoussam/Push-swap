/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:31:53 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/13 18:01:19 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		get_range(stack_a);
		if (ft_lstsize(stack_a) <= 5)
			sort_short_list(&stack_a, &stack_b, ft_lstsize(stack_a));
		else
			radix_sort(&stack_a, &stack_b);
	}
}
