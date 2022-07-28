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
        j = 0;
        while(argv[i][j])
        {
            if(!ft_isdigit(argv[i][j]) && argv[i][j] > 32 &&
            (argv[i][j] != '+' && argv[i][j] != '-'))
            {
                print_error();
            }
            j++;
        }
        i--;
    }
}

void arg_isrepeat(char **argv,int argc)
{
    int i;
    int j;

    i = argc - 1;
    j = argc - 1;
    while(i > 0)
    {
        j = argc - 1;
        while(j > 0)
        {
             if(i == j)
                j--;
            else if(ft_strcmp(argv[i], argv[j]) == 0)
                print_error();
            j--;
        }
    i--;
    }
}