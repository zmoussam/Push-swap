/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkArg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:53 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 23:05:26 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	arg_isdigit(char **argv, int argc)
{
	int	i;
	int	j;

	i = argc - 1;
	j = 0;
	while (i > 0)
	{
		j = 0;
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

void	is_repeat(t_stack_b *stack_a)
{
	t_stack_b	*head1;
	t_stack_b	*head2;

	head1 = stack_a;
	while (head1)
	{
		head2 = head1->next;
		while (head2)
		{
			if (head1->data == head2->data)
			{
				print_error();
				ft_lstclear(&stack_a);
				exit(1);
			}
			head2 = head2->next;
		}
		head1 = head1->next;
	}
}

void	ft_lstclear(t_stack_b **lst)
{
	t_stack_b	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
	lst = NULL;
}
