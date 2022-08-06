/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:18 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/05 18:21:44 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rotate(s_stack **stack, char *inst)
{
   if(*stack)
   {
      s_stack *tmp;
      s_stack *head;
      tmp = *stack;
      head = *stack;
      while(head)
      {
         if(head->next == NULL)
         {
            *stack = tmp->next;
            head->next = tmp;
            tmp->next = NULL;
            break;
         }
         head = head->next;
      }
      write(1, inst, 3);
   }
}
void rr(s_stack *stack_a, s_stack *stack_b)
{
    rotate(&stack_a, "ra\n");
    rotate(&stack_b, "rb\n");
}
