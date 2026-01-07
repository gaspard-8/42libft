#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len);
static int		min(int a, int b);

static int		min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	if (len == 0 || start >= ft_strlen(s))
	{
		substring = malloc(1);
		substring[0] = 0;
		return (substring);
	}
	i = 0;
	substring = malloc((min((ft_strlen(s) - start), len) + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (s[i + start] && i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[min((ft_strlen(s) - start), len)] = 0;
	return (substring);
}

