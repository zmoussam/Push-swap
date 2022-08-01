int	ft_atoi(const char *str)
{
	int			i;
	long int	resultat;
	int			sign;

	i = 0;
	sign = 1;
	resultat = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (int)(str[i] - '0');
		i++;
	}
	return (sign * resultat);
}
#include<stdlib.h>
#include<stdio.h>
int main()
{
    printf("%d\n", ft_atoi("2147483648214748"));
    printf("%d\n", atoi("2147483648214748"));
}