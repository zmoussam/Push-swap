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
    int size_a;
    s_stack *head;

    stack_b = (s_stack*)malloc(sizeof(s_stack));
    stack_b->data = 5;
    stack_b->next = NULL;
    if(argc > 1)
    {
        argIsdigit(argv, argc);
        stack_a = empiler(argv, argc);
        isRepeat(stack_a);
        if(checkIsSort(stack_a))
            exit(0);
        // if(size_a <= 3)
        //     sortShortList(&stack_a, &stack_b, ft_lstsize(stack_a));
    }
    // reverseRotate(&stack_a, "rra\n");
    // reverseRotate(&stack_a, "rra\n");
    // reverseRotate(&stack_a, "rra\n");
    // swap(stack_a, "sa\n");
    // swap(stack_a, "sa\n");
    // reverseRotate(&stack_a, "rra\n");
    // rotate(&stack_a, "ra\n");
    // reverseRotate(&stack_a, "rra\n");
    // reverseRotate(&stack_a, "rra\n");
    // rotate(&stack_a, "ra\n");
    // rotate(&stack_a, "ra\n");
    // swap(stack_a, "sa\n");
    // swap(stack_a, "sa\n");
    push(&stack_b, &stack_a, "pb\n");
    head = stack_a;
    while(head)
    {
        printf("data = %d index = %d\n", head->data, head->index); 
        head = head->next;
    }
}
