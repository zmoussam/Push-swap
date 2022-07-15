#include "push_swap.h"
#include<stdio.h>

 struct s_stack{
    int content;
    struct s_stack *next;
}    typedef       t_stack;
int main(int argc, char **argv)
{
    t_stack *a_stack;
    t_stack *head;
    head = a_stack;
    int i;
    i = 1;
    if (argc > 1)
    {
        while(argv[i])
        {
            a_stack->content = ft_atoi(argv[i]);
            a_stack = a_stack->next;
            i++;
        }
        while(head)
        {
            printf("%d\n",head->content);
		    head = head->next;
        }

    }

}