/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:55 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/03 16:59:26 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

s_stack* empiler(s_stack *pile, char **argv ,int argc)
{
    int i;
    int j;
    
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
        /* free sp! */
        i--; 
    }
    return pile;
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