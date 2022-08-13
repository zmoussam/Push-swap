/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:12:21 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/13 22:03:38 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_binary_of_range(t_stack *stack_a)
{
	int		max;
	int		max_bit;
	t_stack	*head;

	head = stack_a;
	max = ft_lstsize(stack_a) - 1;
	max_bit = ft_strlen(ft_strchr(range_to_binary(&max), '1'));
	while (head)
	{
		head->binary = ft_strdup(range_to_binary(&(head->range)), max_bit);
		head = head->next;
	}
	return (max_bit);
}

int	check_if_one_exist(t_stack *stack, int i)
{
	t_stack	*head;

	head = stack;
	while (head)
	{
		if (head->binary[i-1] == '1')
			return (1);
		head = head->next;
	}
	return (0);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	int		j;
	int		size_b;
	int		size_a;
	int k;
	int x;

	size_a = 0;
	i = get_binary_of_range(*stack_a) - 1;
	while (i >= 0)
	{
		size_a = ft_lstsize(*stack_a) + 1;
		while (--size_a > 0)
		{
			if ((*stack_a)->binary[i] == '0')
			{
				if (i == 0)
				{
					if (check_is_sort(*stack_a))
					{
						size_b = ft_lstsize(*stack_b);
						j = 0;
						while (j++ < size_b)
							push(stack_a, stack_b, "pa\n");
						exit(0);
					}
				}
				push(stack_b, stack_a, "pb\n");
				
			}
			else
				rotate(stack_a, "ra\n");
		}
		size_b = ft_lstsize(*stack_b);
		j = 0;
		while (j++ < size_b)
		{
			if ((*stack_b)->binary[i - 1] == '0' && i != 0)
				rotate(stack_b, "rb\n");
			else 
			{
					push(stack_a, stack_b, "pa\n");
			
			}
		}
		i--;
	}
}
