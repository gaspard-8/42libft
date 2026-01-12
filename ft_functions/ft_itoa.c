/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:20:05 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/12 16:37:42 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n);
static void	putnbr(char *nb, int n, int size);

static void	putnbr(char *nb, int n, int size)
{
	long	nbl;

	nbl = n;
	if (nbl < 0)
	{
		nbl = -nbl;
		nb[0] = '-';
	}
	if (nbl + 1 > 10)
		putnbr(nb, (int)(nbl / 10), size - 1);
	nb[size] = (nbl % 10) + '0';
}

char	*ft_itoa(int n)
{
	int		i;
	char	*nb;
	int		num_copy;

	i = 0;
	num_copy = n;
	while (num_copy != 0)
	{
		num_copy /= 10;
		i++;
	}
	if (n <= 0)
		i++;
	nb = malloc((i + 1) * sizeof(char));
	if (!nb)
		return (NULL);
	putnbr(nb, n, i - 1);
	nb[i] = 0;
	return (nb);
}
