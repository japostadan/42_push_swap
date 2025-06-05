#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		++str;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
