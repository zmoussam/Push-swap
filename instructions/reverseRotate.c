/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:14 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/06 18:21:52 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void reverseRotate(s_stack **stack, char *inst)
{
    if(*stack)
    {
        s_stack *head;
        s_stack *tmp;
        head = *stack;
        while(head)
        {
            if(head->next->next == NULL)
            {
                tmp = head->next;
                head->next = NULL;
                tmp->next = *stack;
                *stack = tmp;
                break;
            }
            head->index += 1;
            head = head->next;
        }
        head->index += 1;
        (*stack)->index = 0;
        if(!inst)
            return;
        write(1, inst, 4);
    }
}

void rrr(s_stack **stack_a, s_stack **stack_b)
{
    reverseRotate(stack_a, NULL);
    reverseRotate(stack_b, NULL);
    write(1, "rrr\n", 4);
}


