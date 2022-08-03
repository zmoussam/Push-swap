/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:33:04 by zmoussam          #+#    #+#             */
/*   Updated: 2022/07/28 17:33:04 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include<stdlib.h>
#include<stdio.h>
#include<stdio.h>
#include<unistd.h>

typedef struct t_stack{
    int data;
    struct t_stack *next;
} s_stack;

s_stack* empiler(s_stack *pile, char **argv,int argc);
void arg_isdigit(char **argv,int argc);
void print_error();
void is_repeat(s_stack *stack_a);
void swap(s_stack *list);
void ss(s_stack *stack_a, s_stack *stack_b);
#endif
