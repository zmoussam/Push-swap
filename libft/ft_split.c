/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:37 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 23:08:00 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_of_words(char const	*word, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (word[i] == c)
		i++;
	while (word[i] != c && word[i] != '\0')
	{
		i++;
		size++;
	}
	return (size);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_getindex(int i, char c, const char *s)
{
	while (s[i] == c)
		i++;
	return (i);
}

char	**ft_free(char **new, int f)
{
	int	size;

	size = 0;
	while (new[size] != NULL)
			size++;
	size--;
	while (size >= 0)
	{
		free(new[size]);
		size--;
	}
	free(new);
	if (!f)
		exit(0);
	return (NULL);
}

char	**ft_split(char	const *s, char c)
{
	int		a;
	int		i;
	int		b;
	char	**new;

	if (!s)
		return (NULL);
	new = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!new)
		return (write(1, "memory is not allocated!!\n", 26), exit(0), NULL);
	a = 0;
	i = 0;
	while (a < count_words(s, c))
	{
		b = 0;
		new[a] = malloc(size_of_words(&s[i], c) + 1);
		if (!new[a])
			return (ft_free(new, 0));
		i = ft_getindex(i, c, s);
		while (s[i] != c && s[i])
			new[a][b++] = s[i++];
		new[a++][b] = '\0';
	}
	new[a] = NULL;
	return (new);
}
