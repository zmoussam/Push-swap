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
void is_repeat(s_stack *stack_a)
{
    s_stack *head1;
    s_stack *head2;
    int i;
    int j;
    i = 0;

    head1 = stack_a;
        while(head1)
        {
            head2 = stack_a;
            j = 0;
            while(head2)
            {
                if(i == j)
                {
                    j++;
                    head2 = head2->next;
                    continue;
                }
                if(head1->data == head2->data)
                    print_error();
                j++;
                head2 = head2->next;
            }
            i++;
            head1 = head1->next;
        }
}
int main(int argc, char **argv)
{
    s_stack *stack_a;
    s_stack *stack_b;
    s_stack *head;
    
    stack_a = (s_stack *)malloc(sizeof(s_stack));
    stack_b = (s_stack *)malloc(sizeof(s_stack));
    if(!stack_a || !stack_b)
        exit(1);
    stack_a = NULL;
    if(argc > 1)
    {
        arg_isdigit(argv, argc);
        stack_a = empiler(stack_a, argv, argc);
        is_repeat(stack_a);
        
    }
    head = stack_a;
    while(head)
    {
        printf("%d\n", head->data);  
        head = head->next;
    }
    //printf("%s\n",head);
}