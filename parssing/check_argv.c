/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:53 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/01 22:13:57 by zmoussam         ###   ########.fr       */
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

void arg_isrepeat(char **argv,int argc)
{
    int i;
    int j;

    i = argc - 1;
    while(i > 0)
    {
        char **sp;
        sp = ft_split(argv[i], ' ');
        j = 0;
        while(sp[j] != NULL)
            j++;
        j--;
        while(j > 0)
        {
            if(ft_strcmp() == 0)
                print_error();
            j--;
        }
    i--;
    }
    /* free sp */
}