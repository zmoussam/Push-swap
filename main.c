// #include "push_swap.h"
#include "push_swap.h"

int main(int argc, char **argv)
{
    s_stack *stack_a;
    s_stack *stack_b;
    s_stack *head;
    int i;
    int j;

    i = argc - 1;
    j = argc - 1;
    stack_a = (s_stack *)malloc(sizeof(s_stack));
    stack_b = (s_stack *)malloc(sizeof(s_stack));
    if(!stack_a || !stack_b)
        exit(1);
    stack_a = NULL;
    if(argc > 1)
    {
        arg_isdigit(argv, argc);
        arg_isrepeat(argv, argc);
        stack_a = empiler(stack_a, argv, argc);
        
    }
    head = stack_a;
    while(head)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}