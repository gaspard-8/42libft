/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:19:57 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/13 12:02:16 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del && lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
