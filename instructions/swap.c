/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:21 by zmoussam          #+#    #+#             */
/*   Updated: 2022/07/28 20:49:59 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void swap(s_stack *list)
{
    s_stack *tmp;
    s_stack *tmp2;
    tmp = list->next;
    tmp2 = list->next->next;
    list->next = ;
    list->next->next = tmp;
}
int main()
{
    s_stack list1;
    s_stack list2;
    s_stack *head;
    list1.data = 1;
    list1.next = &list2;
    list2.data = 2;
    list2.next = NULL;
    swap(&list1);
    head = &list2;
    while(head)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}