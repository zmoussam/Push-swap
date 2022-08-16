/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 23:19:12 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 23:23:06 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstdelone(t_stack *lst)
{
	if (lst)
		free(lst);
}

void	ft_lstclear(t_stack **lst)
{
	t_stack	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(temp);
	}
	lst = NULL;
}

void	ft_free_binary(t_stack *stack)
{
	t_stack	*head;
	char	*temp;

	head = stack;
	while (head)
	{
		temp = head->binary;
		free(temp);
		head = head->next;
	}
}
