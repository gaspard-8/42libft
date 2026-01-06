/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:58:16 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/06 15:02:17 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst_addr;
	char	*src_addr;

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
