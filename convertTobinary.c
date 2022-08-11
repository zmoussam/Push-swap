/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertTobinary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:30:59 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/11 00:34:07 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*rangeToBinary(void *buf)
{
	char	*ptr;
    char *str;
	short   i;
    int     k;
    
    k = 0;
    ptr = (char *)buf;
	short	j;
    str = (char *)malloc(sizeof(char) * 32 + 1);
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
// int main()
// {
//     int size = 0;
//     long max = 700;
//     size = ft_strlen(ft_strchr(rangeToBinary(&max), '1'));
//     printf("size = %d\n", size);
//     int x = 700;
//     int y = 800;
//     int z = 900;
//     printf("%s\n", ft_strdup(rangeToBinary(&x), size));
//     printf("%s\n", ft_strdup(rangeToBinary(&y), size));
//     printf("%s\n", ft_strdup(rangeToBinary(&z), size));

// }