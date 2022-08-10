/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:12:21 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/11 00:19:33 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<string.h>


char	*ft_strdup(char *s1, int max_bit)
{
	char	*copy;
	int		j;
    int     i;

	copy = (char *)malloc((max_bit + 1) * sizeof(char));
	if (copy == NULL)
		return (copy);
	j = 0;
    i = 0;
	while (j < 32 - max_bit)
		j++;
    while(s1[j])
    {
        copy[i] = s1[j];
        i++;
        j++;
    }
	copy[i] = '\0';
    free(s1);
	return (copy);
}
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0 ;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strchr(const char *s, int c)
{
	int	i;
	i = 0;
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
char	*rangeToBinary(void *buf)
{
	char	*ptr;
    char *str;
	short   i;
    int     k;
    
    k = 0;
    ptr = (char *)buf;
	short	j;
    str = (char *)malloc(sizeof(char) * 33 + 1);
	for (i = 3; i >= 0; i--)
	{
		for (j = 7; j >= 0; j--)
		{
			if((ptr[i] >> j) & 1)
                str[k] = '1';
            else 
                str[k] = '0';
            k++;
		}
	}
    return (str);
}

int main()
{
    int size = 0;
    long max = 2147483647;
    size = ft_strlen(ft_strchr(rangeToBinary(&max), '1'));
    printf("size = %d\n", size);
    int x = 0;
    int y = 7;
    int z = 20;
    printf("%s\n", ft_strdup(rangeToBinary(&x), size));
    printf("%s\n", ft_strdup(rangeToBinary(&y), size));
    printf("%s\n", ft_strdup(rangeToBinary(&z), size));

}