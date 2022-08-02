/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:53 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/02 19:30:56 by zmoussam         ###   ########.fr       */
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
    int len_arg;
    int len_sp;
    int j;
    int i;
    
    len_arg = argc - 1;
    while(len_arg > 0)
    {
        char **sp;
        sp = ft_split(argv[len_arg], ' ');
        len_sp = 0;
        while (sp[len_sp] != NULL)
            len_sp++;
        printf("%d\n",len_sp);
        j = 0;
        i = 0;
        while(i < len_sp)
        {
            j = 0;
            while(j < len_sp)
            {
               if(i == j)
               {
                   j++;
                 continue;   
               }
               if(ft_strcmp(sp[i], sp[j]) == 0)
                    print_error();
              j++;
            }
            i++;
        }
        len_arg--;
        
    }
    // i = argc - 1;
    // j = argc - 1;
    // while(i > 0)
    // {
    //     char **sp;
    //     sp = ft_split(argv[i],' ');
    //     len_sp = 0;
    //     while(sp[len_sp] != NULL)
    //         len_sp++;
    //     len_sp--;
    //     j = len_sp;
    //     while(len_sp >= 0)
    //     {
    //         if()
    //         while(j >= 0)
    //         {
                
    //         }
    //     }
    //     j = argc - 1;
    //     if(i == j)
    //         j--;
    //     while(j > 0)
    //     {
    //         if(ft_strcmp(argv[i], argv[i]) == 0)
    //             print_error();
    //         j--;
    //     }
    // i--;
    // }
    /* free sp */
}