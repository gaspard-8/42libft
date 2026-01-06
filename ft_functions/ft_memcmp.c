#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str_s1;
	unsigned char	*str_s2;

	str_s1 = (unsigned char *) s1;
	str_s2 = (unsigned char *) s2;

	i = 0;
	if (n == 0)
		return (0);
	while (str_s1[i] && str_s2[i] && (str_s1[i] == str_s2[i]) && i < n - 1)
		i++;
	return (str_s1[i] - str_s2[i]);
}

