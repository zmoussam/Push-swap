/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:31:28 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/17 14:37:57 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_error(void)
{
	write(1, "error\n", 6);
}

void	count_sign(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i + 1]))
		{
			print_error();
			exit(0);
		}
		if ((str[i] == '+' || str[i] == '-'))
			count++;
		i++;
	}
	if (count > 1)
	{
		print_error();
		exit(0);
	}
}

static void	check_nbr(unsigned long nbr, int signe)
{
	if (signe == -1)
	{
		if (nbr > 2147483648)
		{
			print_error();
			exit(0);
		}
	}
	else
	{
		if (nbr > 2147483647)
		{
			print_error();
			exit(0);
		}
	}
}

int	ft_atoi(const char *str)
{
	unsigned long	nombre;
	int				signe;
	int				i;

	i = 0;
	nombre = 0;
	signe = 1;
	count_sign(str);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nombre = nombre * 10;
		nombre = nombre + (int)(str[i] - '0');
		i++;
	}
	check_nbr(nombre, signe);
	return (nombre * signe);
}
