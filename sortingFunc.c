/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingFunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:30:33 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/05 16:43:37 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

short checkIsSort(s_stack *stack)
{
    s_stack *head;
    head = stack;
    while(head && head->next)
    {
        if(head->data > head->next->data)
            return (0);
        head = head->next ; 
    }
    return (1);
}
void sortShortList(s_stack *stack_a, s_stack *stack_b, int size)
{
    if(size == 1)
        exit(0);
    else if(size == 2)
        if(stack_a->data > stack_a->next->data)
            swap(stack_a, "sa");
    
}