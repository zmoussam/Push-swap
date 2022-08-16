/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertToBinary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:30:59 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 23:14:45 by zmoussam         ###   ########.fr       */
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
	i = 4;
	str = (char *)malloc(sizeof(char) * 32 + 1);
	if (!str)
		return (write(1, "memory is not allocated!!\n", 26), exit(0), NULL);
	while (--i >= 0)
	{
		j = 7;
		while (j >= 0)
		{
			if ((ptr[i] >> j) & 1)
				str[k++] = '1';
			else
				str[k++] = '0';
			j--;
		}
	}
	return (str);
}
