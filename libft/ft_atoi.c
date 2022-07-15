#include "../push_swap.h"

static int	check_nbr(unsigned long nbr, int signe)
{
	if (signe < 0)
	{
		if (nbr == 2147483648)
			return (-2147483648);
		return (0);
	}
	return (-1);
}

int	ft_atoi(const char *str)
{
	unsigned long	nombre;
	int				signe;
	int				i;

	i = 0;
	nombre = 0;
	signe = 1;
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
	if (nombre >= 2147483648)
		return (check_nbr(nombre, signe));
	return (nombre * signe);
}