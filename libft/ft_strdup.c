/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:01:50 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 00:46:47 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		size;
	int		j;

	size = 0;
	while (s1[size])
		size++;
	copy = (char *)malloc((size + 1) * sizeof(char));
	if (copy == NULL)
		return (copy);
	j = 0;
	while (s1[j])
	{
		copy[j] = s1[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
