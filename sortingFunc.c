/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingFunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:30:33 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/11 14:55:51 by zmoussam         ###   ########.fr       */
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
    getRange(*stack_a);
    if(size == 1)
        exit(0);
    else if(size == 2)
    {
        if((*stack_a)->data > (*stack_a)->next->data)
            swap(*stack_a, "sa\n");
    }
    else if(size == 3)
        sortSize3(stack_a);
    else if(size == 4)
        sortSize4(stack_a, stack_b);
    else 
        sortSize5(stack_a, stack_b);
    
}
void sortSize3(s_stack **stack_a)
{
    if((*stack_a)->data < (*stack_a)->next->data)
        {
            if((*stack_a)->data > (*stack_a)->next->next->data)
                reverseRotate(stack_a, "rra\n");
            else
            {
                swap(*stack_a, "sa\n");
                rotate(stack_a, "ra\n");
            }
        } 
    else if((*stack_a)->data < (*stack_a)->next->next->data)
        swap(*stack_a, "sa\n");
    else if((*stack_a)->next->data < (*stack_a)->next->next->data)
        rotate(stack_a, "ra\n");
    else
    {
        swap(*stack_a, "sa\n");
        reverseRotate(stack_a, "rra\n");
    }
}
void sortSize4(s_stack **stack_a, s_stack **stack_b)
{
    s_stack *head;
    int i;
    
    head = *stack_a;
    i = 3;
    getRange(*stack_a);
    while(head)
    {
        if(head->range == 0)
        {
            int index;
            index = head->index;
            if(head->index == 3)
            {
                reverseRotate(stack_a, "rra\n");
                if(checkIsSort(*stack_a))
                    break;
            }
            else
                while(i++ < index)
                  rotate(stack_a, "ra\n");
            if(checkIsSort(*stack_a))
                break;
            push(stack_b, stack_a, "pb\n");
            sortSize3(stack_a);
            push(stack_a, stack_b, "pa\n");
            break;
        } 
        head = head->next;
    }
}
void sortSize5(s_stack **stack_a, s_stack **stack_b)
{
    s_stack *head;
    int i;
    head = *stack_a;
    i = 0;
    getRange(*stack_a);
    while(head)
    {
        if(head->range == 0)
        {
            int index;
            index = head->index;
            if(index > 2)
            {
                while (i++ < 5 - index)
                    reverseRotate(stack_a, "rra\n");
                if(checkIsSort(*stack_a))
                    return;
                push(stack_b, stack_a, "pb\n");
                sortSize4(stack_a, stack_b);
                push(stack_a, stack_b, "pa\n");
                return;        
            }
            else 
            {
                while(i++ < index)
                    rotate(stack_a, "ra\n");
                if(checkIsSort(*stack_a))
                    return;
                push(stack_b, stack_a, "pb\n");
                sortSize4(stack_a, stack_b);
                push(stack_a, stack_b, "pa\n");
                return; 
            }
        }
        head = head->next;
    }   
}