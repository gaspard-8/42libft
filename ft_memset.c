#include "libft.h"

void *ft_memset(void *s, int c, size_t n);

void *ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*address;

	address = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		address[i] = c;
		++i;
	}
	return (address);
}
