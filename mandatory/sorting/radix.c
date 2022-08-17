/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:12:21 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/17 13:25:46 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_binary_of_range(t_stack *stack_a)
{
	int		max;
	int		max_bit;
	t_stack	*head;
	char	*str;

	head = stack_a;
	max = ft_lstsize(stack_a) - 1;
	str = range_to_binary(&max);
	max_bit = ft_strlen(ft_strchr(str, '1'));
	free(str);
	while (head)
	{
		head->binary = ft_strdup2(range_to_binary(&(head->range)), max_bit);
		head = head->next;
	}
	return (max_bit);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		last_bit;
	int		size_a;

	size_a = 0;
	last_bit = get_binary_of_range(*stack_a) - 1;
	while (last_bit >= 0)
	{
		size_a = ft_lstsize(*stack_a) + 1;
		while (--size_a > 0)
		{
			if ((*stack_a)->binary[last_bit] == '0')
			{
				if (last_bit == 0)
					if (check_is_sort(*stack_a))
						push_all_b(stack_a, stack_b);
				push(stack_b, stack_a, "pb\n");
			}
			else
				rotate(stack_a, "ra\n");
		}
		push_back(stack_a, stack_b, last_bit);
		last_bit--;
	}
}

void	push_all_b(t_stack **stack_a, t_stack **stack_b)
{
	int	size_b;
	int	j;

	size_b = ft_lstsize(*stack_b);
	j = 0;
	while (j++ < size_b)
		push(stack_a, stack_b, "pa\n");
	ft_free_binary(*stack_a);
	ft_lstclear(stack_a);
	exit(1);
}

void	push_back(t_stack **stack_a, t_stack **stack_b, int last_bit)
{
	int	size_b;
	int	j;

	j = 0;
	size_b = ft_lstsize(*stack_b);
	while (j++ < size_b)
	{
		if ((*stack_b)->binary[last_bit - 1] == '0')
			rotate(stack_b, "rb\n");
		else
			push(stack_a, stack_b, "pa\n");
	}
}
