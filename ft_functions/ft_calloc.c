#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (size > 18446744073709551615UL / nmemb)
		return (NULL);
	if (size == 0 || nmemb == 0)
		mem = malloc(1);
	else
		mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	return (mem);
}
