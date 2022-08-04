/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:21 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/04 19:10:26 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void swap(s_stack *stack, char *inst)
{
    int tmp;
    if (stack && stack->next)
    {
        tmp = stack->data;
        stack->data = stack->next->data;
        stack->next->data = tmp;
        write(1, inst, 2);
        write(1, "\n", 1);
    }
}
void ss(s_stack *stack_a, s_stack *stack_b)
{
    swap(stack_a, "sa");
    swap(stack_b, "sb");
}