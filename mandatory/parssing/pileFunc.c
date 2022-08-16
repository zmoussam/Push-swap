/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pileFunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:55 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 23:12:22 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_addfront(t_stack **stack, int data)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		ft_lstclear(stack);
	new->data = data;
	new->next = *stack;
	*stack = new;
	return (*stack);
}

t_stack	*empiler(char **argv, int argc)
{
	int			i;
	int			j;
	t_stack		*pile;
	char		**sp;

	pile = NULL;
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
	get_index(pile);
	return (pile);
}

void	get_range_aux(t_stack **head1, t_stack **head2, t_stack **tmp, int *i)
{
	if ((*head2)->data < (*head1)->data && (*head2)->v != 1)
	{
		(*head2)->range = *i;
		*head1 = *head2;
	}
	else if ((*head2)->data > (*head1)->data)
		*tmp = *head2;
}

void	get_range(t_stack *stack)
{
	int		*i;
	int		x;
	t_stack	*head1;
	t_stack	*head2;
	t_stack	*tmp;

	x = 0;
	i = &x;
	tmp = stack;
	init_v_and_range(stack);
	while (*i < ft_lstsize(stack))
	{
		head1 = tmp;
		head2 = stack;
		head1->range = *i;
		while (head2)
		{
			get_range_aux(&head1, &head2, &tmp, i);
			head2 = head2->next;
		}
		x++;
		head1->v = 1;
	}
}

int	ft_lstsize(t_stack *lst)
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
