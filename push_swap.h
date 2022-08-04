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

s_stack* empiler(char **argv,int argc);
void arg_isdigit(char **argv,int argc);
void print_error();
void is_repeat(s_stack *stack_a);
void swap(s_stack *list, char *inst);
void ss(s_stack *stack_a, s_stack *stack_b);
void push(s_stack **stack_dst, s_stack **stack_src, char *inst);
void rotate(s_stack **stack, char *inst);
void reverse_rotate(s_stack **stack, char *inst);
void rrr(s_stack **stack_a, s_stack **stack_b);

#endif
