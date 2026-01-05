/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:03:11 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/05 20:25:04 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	size_dst;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	size_dst = i;
	while (i + 1 < size && src[i - size_dst])
	{
		dst[i] = src[i - size_dst];
		i++;
	}
	if (i < size)
		dst[i] = 0;
	while (src[j])
		j++;
	return (size_dst + j);
}

/* int main()
{
	char dst[] = "1337 to 42";
	char src[] = "Born to code";

	printf("%d ", ft_strlcat(dst, src, 14));
	write(1, &dst, 20);
} */
