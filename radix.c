/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:12:21 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/11 20:38:48 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int getBinaryOfRange(s_stack *stack_a)
{
    int max;
    int max_bit;
    s_stack *head;
    
    head = stack_a;
    max = ft_lstsize(stack_a) - 1;
    max_bit = ft_strlen(ft_strchr(rangeToBinary(&max), '1'));
    while(head)
    {
        head->binary = ft_strdup(rangeToBinary(&(head->range)), max_bit);
        head = head->next;
    }
    return (max_bit);
}
void radixSort(s_stack **stack_a, s_stack **stack_b)
{
   s_stack *head;
   int i;
   int j;
   int max_bit;
   int size_b;
   int size_a;
   
   size_a = 0;
   head = *stack_a;
   max_bit = getBinaryOfRange(*stack_a);
   i = max_bit;
   while(i >= 0)
   {
       size_a = ft_lstsize(*stack_a) + 1;
       while(--size_a > 0)
       {
            if((*stack_a)->binary[i] == '0')
                  push(stack_b, stack_a, "pb\n");
            else 
                rotate(stack_a, "ra\n");
       }
       size_b = ft_lstsize(*stack_b);
       j = 0;
        while(j++ < size_b)
            push(stack_a, stack_b, "pa\n");
        i--;
   }
}
int checkIfZeroexist(s_stack *stack, int i)
{
    s_stack *head;
    head = stack->next;
    while(head)
    {
        if(head->binary[i] == '0')
            return (1);
        head = head->next;
    }
    return (0);
}
