/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pileFunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:55 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/06 18:33:16 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

s_stack* empiler(char **argv ,int argc)
{
    int i;
    int j;
    int index;
    void *pile;
    s_stack *head;
    pile = NULL;
    index = 0;
    j = 0;
    i = argc - 1;
    while(i > 0)
    {
        char **sp;
        sp = ft_split(argv[i], ' ');
        j = 0;
        while(sp[j] != NULL)
            j++;
        j--;
        while(j >= 0)
        {
            s_stack *new;
            new = malloc(sizeof(s_stack));
            new->data = ft_atoi(sp[j]);
            new->next = pile;
            pile = new;
            j--;
        }
        i--; 
    }
    getIndex(pile);
    return pile;
}
void getIndex(s_stack *stack)
{
    s_stack *head;
    int index;

    index = 0;
    head = stack;
    while (head)
    {
        head->index = index;
        head = head->next;
        index++;
    }
    
}
// int main(int argc, char **argv )
// {
//     s_stack *stack;
//     s_stack *head;
//      stack = (s_stack*)malloc(sizeof(s_stack));
//      stack = NULL;
//      stack = empiler(stack, argv, argc);   
//      stack = empiler(stack, argv, argc);   
//     head = stack;
//     while(head)
//     {
//         printf("%d\n", head->data);  
//         head = head->next;
//     }
//      printf("%s\n",head); 
// }