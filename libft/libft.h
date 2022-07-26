#ifndef LIBFT_H
#define LIBFT_H

#include<stdlib.h>

int	ft_atoi(const char *str);
int	ft_isdigit(int c);
char	**ft_split(char	const *s, char c);
size_t	ft_strlen(const char *str);
int	ft_strcmp(char *s1, char *s2);

#endif