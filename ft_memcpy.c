#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n);

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_addr;
	char	*src_addr;

	dest_addr = (char *) dest;
	src_addr = (char *) src;

	i = 0;
	while (i < n)
	{
		dest_addr[i] = src_addr[i];
		i++;
	}
	return (dest);
}


