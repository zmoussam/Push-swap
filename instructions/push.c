/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:10 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/06 18:39:06 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

 void push(s_stack **stack_dst, s_stack **stack_src, char *inst)
 {
     if(*stack_src)
     {
        s_stack *tmp;
        tmp = *stack_src;
        *stack_src = tmp->next;
        tmp->next = *stack_dst;
        *stack_dst = tmp;
        if(!inst)
            return;
        getIndex(*stack_dst);
        getIndex(*stack_src);
        
        write(1, inst, 3);
     }
 }

//  int main()
//  {
//     s_stack *one;
//     s_stack *two;
//     s_stack *three;
//     s_stack *one2;
//     s_stack *two2;
//     s_stack *three2;
//     s_stack *head;
//     one = malloc(sizeof(s_stack));
//     two = malloc(sizeof(s_stack));
//     three = malloc(sizeof(s_stack));
//     one2 = malloc(sizeof(s_stack));
//     two2 = malloc(sizeof(s_stack));
//     three2 = malloc(sizeof(s_stack));
//     one->data = 1;
//     one->next = two;
//     printf("%s\n","hi");
//     two->data = 2;
//     two->next = three;
//     three->data = 3;
//     three->next = NULL;
//     one2->data = 0;
//     one2->next = two2;
//     two2->data = 2;
//     two2->next = three2;
//     three2->data = 3;
//     three2->next = NULL;
//     push(&one, &one2);
//     head = one;
//     while(head)
//     {
//         printf("%d\n", head->data);  
//         head = head->next;
//     }
//     head = one2;
//      while(head)
//     {
//         printf("%d\n", head->data);  
//         head = head->next;
//     }
     
//  }