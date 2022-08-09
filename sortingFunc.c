/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingFunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:30:33 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/09 02:11:00 by zmoussam         ###   ########.fr       */
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
    int min;
    s_stack *head;
    int i;
    int tmp;
    int tmp2;
    short bolean;
    int size2;
    int x;
    size2 = size;
    
    bolean = 0;
    head = *stack_a;
    min = 0;   
    if(size == 1)
        exit(0);
    else if(size == 2)
    {
        if((*stack_a)->data > (*stack_a)->next->data)
            swap(*stack_a, "sa\n");
    }
    else if(size == 3)
        sortSize3(stack_a);
    else 
    { 
            getRange(*stack_a);
        while(head)
        {
            getIndex(*stack_a);
           if(head->range == min)
           {
               min++;
              //printf("range = %d head = %d\n", head->range, head->data);
              size = ft_lstsize(*stack_a);
              tmp2 = size / 2;
              if(head->index >= tmp2)
              {
                    i = 0;
                    tmp = size - head->index;
                    while(i < tmp)
                    {
                        reverseRotate(stack_a, "rra\n");
                        i++;
                    }
                    push(stack_b, stack_a, "pb\n");
                    bolean = 1;
              }
               else if(head->index < tmp2)
              {
                  i = 0;
                 x = head->index;
                  while(i < x)
                  {
                      
                  //printf("index = %d\n", head->index);
                     rotate(stack_a, "ra\n");
                     i++;                      
                  }
                  push(stack_b, stack_a, "pb\n");
                  bolean = 1;
              }
           }
           if(bolean == 1)
           {
            head = *stack_a;
            bolean = 0;  
           }
            else
            {
             head = head->next;
             bolean = 0; 
                
            }
           if(ft_lstsize(*stack_a) == 3)
           {
               if(!checkIsSort(*stack_a))
                    sortSize3(stack_a);
               i = 0;
               tmp = size2 - 3;
               while(i < tmp)
               {
                   push(stack_a, stack_b, "pa\n");
                   i++;
               }
                break;
           }
        } 
    }
    
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