/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:01:09 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 00:47:12 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	unsigned int	size_s1;
	unsigned int	size_s2;
	char			*new;
	unsigned int	i;
	unsigned int	j;

	if (!s1)
		s1 = ft_strdup("");
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	new = (char *)malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < size_s1)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size_s1 + size_s2)
		new[i++] = s2[j++];
	new[i] = '\0';
	free(s1);
	return (new);
}
