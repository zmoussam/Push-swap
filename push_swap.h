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
#endif
