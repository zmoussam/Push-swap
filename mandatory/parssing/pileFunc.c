/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pileFunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:55 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 00:50:33 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*empiler(char **argv, int argc)
{
	int		i;
	int		j;
	void	*pile;
	char	**sp;
	t_stack	*new;

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
			new = (t_stack *)malloc(sizeof(t_stack));
			new->data = ft_atoi(sp[j]);
			new->next = pile;
			pile = new;
			j--;
		}
		i--;
	}
	get_index(pile);
	return (pile);
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

void	get_range(t_stack *stack)
{
	int		i;
	t_stack	*head;
	t_stack	*head2;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	init_v_and_range(stack);
	while (i < ft_lstsize(stack))
	{
		head = tmp;
		head2 = stack;
		head->range = i;
		while (head2)
		{
			if (head2->data < head->data && head2->v != 1)
			{
				head2->range = i;
				head = head2;
			}
			else if (head2->data > head->data)
				tmp = head2;
			head2 = head2->next;
		}
		i++;
		head->v = 1;
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
