/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:14 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/04 23:16:30 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void reverse_rotate(s_stack **stack, char *inst)
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
            head = head->next;
        }
        if(!inst)
            return;
        write(1, inst, 3);
        write(1, "\n", 1);
    }
}

void rrr(s_stack **stack_a, s_stack **stack_b)
{
    reverse_rotate(stack_a, NULL);
    reverse_rotate(stack_b, NULL);
    write(1, "rrr\n", 4);
}


