/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pileFunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:55 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/14 20:07:40 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_stack_b	*empiler(char **argv, int argc)
{
	int		i;
	int		j;
	void	*pile;
	char	**sp;
	t_stack_b	*new;

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
			new = (t_stack_b *)malloc(sizeof(t_stack_b));
			new->data = ft_atoi(sp[j]);
			new->next = pile;
			pile = new;
			j--;
		}
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