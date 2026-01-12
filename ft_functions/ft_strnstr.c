/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:18:17 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/12 16:46:51 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	str_found;

	i = 0;
	str_found = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (i < len && !str_found)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j ++;
			if (little[j] == 0)
				return ((char *) big + i);
		}
		i++;
	}
	return (NULL);
}
