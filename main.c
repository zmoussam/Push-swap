/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:31:53 by zmoussam          #+#    #+#             */
/*   Updated: 2022/07/28 17:31:53 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int main(int argc, char **argv)
{
    s_stack *stack_a;
    s_stack *stack_b;
    s_stack *head;
    if(argc > 1)
    {
        argIsdigit(argv, argc);
        stack_a = empiler(argv, argc);
        isRepeat(stack_a);
        if(checkIsSort(stack_a))
            exit(0);
        if(ft_lstsize(stack_a) <= 3)
            sortShortList(&stack_a, &stack_b, ft_lstsize(stack_a));

    }
    // swap(stack_a, "sa\n");
    // reverseRotate(&stack_a, "rra\n");
    head = stack_a;
    while(head)
    {
        printf("%d\n", head->data); 
        head = head->next;
    }
}
