/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertTobinary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:30:59 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/13 22:03:24 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*range_to_binary(void *buf)
{
	char	*ptr;
	char	*str;
	int		i;
	int		k;
	int		j;

	k = 0;
	ptr = (char *)buf;
	i = 3;
	str = (char *)malloc(sizeof(char) * 32 + 1);
	while (i >= 0)
	{
		j = 7;
		while (j >= 0)
		{
			if ((ptr[i] >> j) & 1)
				str[k] = '1';
			else
				str[k] = '0';
			k++;
			j--;
		}
		i--;
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
