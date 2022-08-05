/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:32:47 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/05 15:04:42 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include "../push_swap.h"
#include<stdlib.h>

int	ft_atoi(const char *str);
int	ft_isdigit(int c);
char	**ft_split(char	const *s, char c);
size_t	ft_strlen(const char *str);

#endif