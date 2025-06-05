#include "./libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && ft_isdigit(str[i]))
	{
		if (sign == 1 && res > (INT_MAX - (str[i] - '0')) / 10)
			return (0);
		else if (sign == -1 && res > (-(INT_MIN + (str[i] - '0'))) / 10)
			return (0);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] && !(ft_isdigit(str[i])))
		return (0);
	return (sign * res);
}
