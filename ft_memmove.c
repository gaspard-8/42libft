#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n);

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *dst_addr;
	char *src_addr;

	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	else
	{
		dst_addr = (char *) dest;
		src_addr = (char *) src;
		while (n > 0)
		{
			dst_addr[n - 1] = src_addr[n - 1];
			n--;
		}
		return (dest);
	}
}

