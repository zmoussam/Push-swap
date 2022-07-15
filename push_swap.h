#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>

struct  a_stack
{
    int countent;
    struct stack_a *next;
} t_stack;

int	ft_atoi(const char *str);
int	ft_isdigit(int c);
char	**ft_split(char	const *s, char c);
size_t	ft_strlen(const char *str);

#endif
