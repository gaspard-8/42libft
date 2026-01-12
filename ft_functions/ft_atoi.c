/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:20:13 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/12 16:37:15 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	return_nb;
	int	sign;

	sign = 1;
	if (nptr[0] == '-')
	{
		sign = -1;
		nptr++;
	}
	i = 0;
	return_nb = 0;
	if (!(nptr[i] >= '0' && nptr[i] <= '9' ))
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9' )
	{
		return_nb = (return_nb * 10) + (nptr[i] - '0');
		i++;
	}
	return (sign * return_nb);
}
