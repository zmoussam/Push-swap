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
        arg_isdigit(argv, argc);
        stack_a = empiler(argv, argc);
        is_repeat(stack_a);
    }
    rotate(stack_a, "ra");
    head = stack_a;
    while(head)
    {
        printf("%d\n", head->data); 
        head = head->next;
    }
    printf("%s\n",head);
    
}
