#include "../push_swap.h"

s_stack* empiler(s_stack *pile, char **argv ,int argc)
{
    int i;
    int j;

    j = 0;
    i = argc - 1;
    while(i > 0)
    {
        char **sp;
        sp = ft_split(argv[i], ' ');
        j = 0;
        while(sp[j] != NULL)
            j++;
        j--;
        while(j >= 0)
        {
            s_stack *new;
            new = malloc(sizeof(s_stack));
            new->data = ft_atoi(sp[j]);
            new->next = pile;
            pile = new;
            j--; 
        }
        i--; 
    }
    return pile;
}