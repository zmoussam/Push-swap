/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkArg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:53 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/11 15:01:23 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void printError()
{
    write(1, "error\n", 6);
    exit(1);
}

void argIsdigit(char **argv, int argc)
{
    int i;
    int j;

    i = argc - 1;
    j = 0;
    while(i > 0)
    {
        j = 0;
        while(argv[i][j])
        {
            if(!ft_isdigit(argv[i][j]) && argv[i][j] > 32 &&
            (argv[i][j] != '+' && argv[i][j] != '-'))
                printError();
            j++;
        }
        i--;
    }
}
void isRepeat(s_stack *stack_a)
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
                    printError();
                j++;
                head2 = head2->next;
            }
            i++;
            head1 = head1->next;
        }
}

