/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pileFunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:55 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 23:06:44 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_stack_b	*ft_addfront(t_stack_b **stack, int data)
{
	t_stack_b	*new;

	new = (t_stack_b *)malloc(sizeof(t_stack_b));
	if (!new)
	{
		ft_lstclear(stack);
		return (write(1, "memory is not allocated!!\n", 26), exit(0), NULL);
	}
	new->data = data;
	new->next = *stack;
	*stack = new;
	return (*stack);
}

t_stack_b	*empiler(char **argv, int argc)
{
	int			i;
	int			j;
	t_stack_b	*pile;
	char		**sp;

	pile = NULL;
	j = 0;
	i = argc - 1;
	while (i > 0)
	{
		sp = ft_split(argv[i], ' ');
		j = 0;
		while (sp[j] != NULL)
			j++;
		j--;
		while (j >= 0)
		{
			pile = ft_addfront(&pile, ft_atoi(sp[j]));
			j--;
		}
		ft_free(sp, 1);
		i--;
	}
	return (pile);
}

short	check_is_sort(t_stack_b *stack)
{
	t_stack_b	*head;

	head = stack;
	while (head && head->next)
	{
		if (head->data > head->next->data)
			return (0);
		head = head->next;
	}
	return (1);
}

int	ft_lstsize(t_stack_b *lst)
{
	int	n;

	n = 0;
	while (lst)
	{
		lst = lst->next;
		n++;
	}
	return (n);
}
