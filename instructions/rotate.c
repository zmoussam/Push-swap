/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:18 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/03 20:08:12 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rotate(s_stack *stack, int stack_len)
{
    int tmp;
    s_stack *head;
    tmp = stack->data;
    head = stack;
    while(head->next)
    {
        head = head->next;
    }
    stack->data = head->data;
    
    
}