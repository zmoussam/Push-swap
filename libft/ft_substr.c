/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:59:35 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/14 18:00:16 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	j;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		new = malloc(1);
		if (!new)
			return (0);
		new[0] = '\0';
		return (new);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	new = (char *)malloc(len + 1);
	if (!new)
		return (new);
	j = 0;
	while (j < len)
		new[j++] = s[start++];
	new[j] = '\0';
	return (new);
}