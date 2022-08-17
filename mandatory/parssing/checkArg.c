/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkArg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:53 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/17 16:09:56 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	arg_isdigit(char **argv, int argc)
{
	int	i;
	int	j;

	i = argc - 1;
	j = 0;
	while (i > 0)
	{
		j = 0;
		if (argv[i][0] == '\0')
		{
			write(1, "error\n", 6);
			exit(0);
		}
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] > 32 &&
					(argv[i][j] != '+' && argv[i][j] != '-'))
			{
				print_error();
				exit(0);
			}
			j++;
		}
		i--;
	}
}

void	is_repeat(t_stack *stack_a)
{
	t_stack	*head1;
	t_stack	*head2;

	head1 = stack_a;
	while (head1)
	{
		head2 = head1->next;
		while (head2)
		{
			if (head1->data == head2->data)
			{
				print_error();
				exit(0);
			}
			head2 = head2->next;
		}
		head1 = head1->next;
	}
}

void	get_index(t_stack *stack)
{
	t_stack	*head;
	int		index;

	index = 0;
	head = stack;
	while (head)
	{
		head->index = index;
		head = head->next;
		index++;
	}
}

void	init_v_and_range(t_stack *stack)
{
	t_stack	*head;

	head = stack;
	while (head)
	{
		head->v = 0;
		head->range = 0;
		head = head->next;
	}
}
