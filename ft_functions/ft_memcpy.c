/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 19:09:01 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/06 15:02:46 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
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
