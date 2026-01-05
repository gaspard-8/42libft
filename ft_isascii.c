#include "libft.h"

int ft_isascii(int c);

int ft_isascii(int c)
{
	if (c < 128 && c > 0)
		return (1);
	return (0);
}
