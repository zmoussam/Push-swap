/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:53 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/03 17:39:47 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void print_error()
{
    write(1, "error\n", 6);
    exit(1);
}

void arg_isdigit(char **argv, int argc)
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
            {
                print_error();
            }
            j++;
        }
        i--;
    }
}
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

