/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:10 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/03 20:39:06 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
 s_stack *push(s_stack *stack_dst, s_stack *stack_src)
 {
     if(stack_src)
     {
        s_stack *new;
        s_stack *tmp;
        new = (s_stack*)malloc(sizeof(s_stack));
        new->data = stack_src->data;
        new->next = stack_dst;
        stack_dst = new;
        tmp = stack_src;
        stack_src = stack_src->next;
        free(tmp);
     }
     return(stack_dst);
 }

 int main()
 {
     s_stack one;
     s_stack two;
     s_stack three;
     s_stack one2;
     s_stack two2;
     s_stack three2;
     s_stack *head;
     one.data = 1;
     one.next = &two;
     two.data = 2;
     two.next = &three;
     three.data = 3;
     three.next = NULL;
     one2.data = 0;
     one2.next = &two2;
     two2.data = 2;
     two2.next = &three2;
     three.data = 3;
     three2.next = NULL;
    one = *push(&one, &one2);
    head = &one;
    while(head)
    {
        printf("%d\n", head->data);  
        head = head->next;
    }
     
 }