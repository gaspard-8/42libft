/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:19:49 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/12 16:39:18 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*cursor;

	cursor = lst;
	i = 0;
	while (cursor != NULL)
	{
		cursor = cursor->next;
		i++;
	}
	return (i);
}
