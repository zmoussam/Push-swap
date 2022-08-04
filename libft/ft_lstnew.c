/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:37 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/04 15:01:15 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

s_stack	*ft_lstnew(void *content)
{
	s_stack	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}