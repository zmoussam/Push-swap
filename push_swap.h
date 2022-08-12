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
    int index;
    int range;
    char *binary;
    int v;
    struct t_stack *next;
} s_stack;

s_stack* empiler(char **argv,int argc);
void argIsdigit(char **argv,int argc);
void printError();
void isRepeat(s_stack *stack_a);
void swap(s_stack *stack, char *inst);
void ss(s_stack *stack_a, s_stack *stack_b);
void push(s_stack **stack_dst, s_stack **stack_src, char *inst);
void rotate(s_stack **stack, char *inst);
void reverseRotate(s_stack **stack, char *inst);
void rrr(s_stack **stack_a, s_stack **stack_b);
int	ft_lstsize(s_stack *lst);
void sortShortList(s_stack **stack_a, s_stack **stack_b, int size);
short checkIsSort(s_stack *stack);
void sortSize3(s_stack **stack_a);
void getIndex(s_stack *stack);
void	ft_swap(int *a, int  *b);
void getRange(s_stack *stack);
void initVAndRange(s_stack *stack);
void sortSize4(s_stack **stack_a, s_stack **stack_b);
void sortSize5(s_stack **stack_a, s_stack **stack_b);
char	*rangeToBinary(void *buf);
void radixSort(s_stack **stack_a, s_stack **stack_b);
int getBinaryOfRange(s_stack *stack_a);
int checkIfZeroexist(s_stack *stack, int i);
void radixSort2(s_stack **stack_a, s_stack **stack_b);
void rr(s_stack **stack_a, s_stack **stack_b);

#endif
