/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:31:29 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 23:08:49 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup2(char *s1, int max_bit)
{
	char	*copy;
	int		j;
	int		i;

	copy = (char *)malloc((max_bit + 1) * sizeof(char));
	if (!copy)
		return (write(1, "memory is not allocated!!\n", 26), exit(0), NULL);
	j = 0;
	i = 0;
	while (j < 32 - max_bit)
		j++;
	while (s1[j])
	{
		copy[i] = s1[j];
		i++;
		j++;
	}
	copy[i] = '\0';
	free(s1);
	return (copy);
}
