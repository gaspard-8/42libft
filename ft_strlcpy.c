/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:53:05 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/05 20:53:03 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size == 0)
		return (ft_strlen(src));
	if (ft_strlen(src) <= size - 1 )
		ft_memcpy(dst, src, ft_strlen(src) + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (ft_strlen(src));
}
/* int main()
{
	char src[] = "Salut la team";
	char dest[] = "Coucou la teamfdasfsadf";
	unsigned int size = 6;
	ft_strlcpy(dest, src, size);
	for (int i = 0; dest[i]; i++)
		write(1, &(dest[i]), 1);
} */
