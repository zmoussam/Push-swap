#include "../push_swap.h"

s_stack* empiler(s_stack *pile, char **argv ,int argc)
{
    int i;

    i = argc - 1;
    while(i > 0)
    {
        s_stack *new;
        new = malloc(sizeof(s_stack));
        new->data = ft_atoi(argv[i]);
        new->next = pile;
        pile = new; 
        i--; 
    }

    return pile;
}