// #include "push_swap.h"
#include<stdlib.h>
#include<stdio.h>
#include "push_swap.h"


// void empiler(s_stack *head, int valeur)
// {
//     s_stack *new;
//     new = (s_stack *)malloc(sizeof(s_stack));
//     new->data = valeur;
//     new->next = head;
//     head = new;
//    // printf("%d\n",head->next);
// }

s_stack* empiler(s_stack *pile, int data)
{
    s_stack *new;
    new = malloc(sizeof(s_stack));
    new->data = data;
    if (pile == NULL)
    {
        new->next = NULL;
        pile = new;
    }
    else
    {
        new->next = pile;
        pile = new;
    }
    return pile;
}
int main(int argc, char **argv)
{
    s_stack *stack_a;
    s_stack *stack_b;
    s_stack *head;
    int i;
    int j;

    i = argc - 1 ;
    j = 0;
    stack_a = (s_stack *)malloc(sizeof(s_stack));
    stack_b = (s_stack *)malloc(sizeof(s_stack));
    if(!stack_a || !stack_b)
        exit(-1);
    stack_a = NULL;
    if(argc > 1)
    {
        while(i > 0)
        {
            stack_a = empiler(stack_a, ft_atoi(argv[i]));
            i--;
        }
    }
    head = stack_a;
    while(head)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

