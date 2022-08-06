/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingFunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:30:33 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/06 13:53:12 by zmoussam         ###   ########.fr       */
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
void sortShortList(s_stack **stack_a, s_stack **stack_b, int size)
{
    short index1;
    short index2;
    if(size == 1)
        exit(0);
    else if(size == 2)
    {
        if((*stack_a)->data > (*stack_a)->next->data)
            swap(*stack_a, "sa\n");
        
    }
    else if(size == 3)
        {
            if((*stack_a)->data < (*stack_a)->next->data)
            {
                
                if((*stack_a)->data > (*stack_a)->next->next->data)
                    reverseRotate(stack_a, "rra\n");
                else
                    {
                        swap((*stack_a), "sa\n");
                        rotate(stack_a, "ra\n");
                    }
            }
            else if((*stack_a)->data < (*stack_a)->next->next->data)
            {
                
                    swap(*stack_a, "sa\n");
            }
            else if((*stack_a)->next->data < (*stack_a)->next->next->data)
                    rotate(stack_a, "ra\n");
            else
                {
                    swap(*stack_a, "sa\n");
                    reverseRotate(stack_a, "rra\n");
                }
        }
}