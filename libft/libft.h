/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:47 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/14 20:11:13 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stdlib.h>

int		ft_atoi(const char *str);
int		ft_isdigit(int c);
char	**ft_split(char	const *s, char c);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup2(char *s1, int max_bit);
void	print_error(void);
int     ft_strcmp(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char const *s2);


#endif
