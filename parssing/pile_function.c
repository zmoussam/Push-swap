/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:55 by zmoussam          #+#    #+#             */
/*   Updated: 2022/07/28 18:25:17 by zmoussam         ###   ########.fr       */
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