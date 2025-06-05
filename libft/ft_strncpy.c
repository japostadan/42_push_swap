#include "libft.h"

char	*ft_strncpy(char *str, int start, int len)
{
	int		i;
	char	*res;

	if (!str)
		return (NULL);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len && str[start + i])
	{
		res[i] = str[start + i];
		++i;
	}
	while (i <= len)
		res[i++] = '\0';
	return (res);
}
