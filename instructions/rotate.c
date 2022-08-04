/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:18 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/04 20:50:29 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rotate(s_stack *stack, char *inst)
{
   if(stack)
   {
      int tmp;
      s_stack *head;
      
      tmp = stack->data;
      head = stack;
      while(head != NULL)
      {
         if(head->next == NULL)
         {
            stack->data = head->data;
            head->data = tmp;
         }   
         head = head->next;
      }
      write(1, inst, 2);
      write(1, "\n", 1);
   }
}
void rr(s_stack *stack_a, s_stack *stack_b)
{
    rotate(stack_a, "ra");
    rotate(stack_b, "rb");
}
