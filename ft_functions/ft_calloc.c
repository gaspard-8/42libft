/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:20:11 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/12 15:20:12 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
