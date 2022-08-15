/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertTobinary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:30:59 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 00:51:45 by zmoussam         ###   ########.fr       */
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
