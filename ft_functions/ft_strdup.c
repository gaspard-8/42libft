#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	dest = malloc(ft_strlen(s) + 1);
	i = 0;
	while (i < ft_strlen(s))
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
