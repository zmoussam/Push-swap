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
        while(argv[i][j])
        {
            if(!ft_isdigit(argv[i][j]))
                print_error();
            j++;
        }
        i--;
    }
}