/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:19:51 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/12 15:19:53 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cursor;
	t_list	*copy;

	if (!lst || !f || !del)
		return (NULL);
	copy = ft_lstnew((*f)(lst->content));
	if (!copy)
		return (NULL);
	cursor = copy;
	lst = lst->next;
	while (lst)
	{
		cursor->next = ft_lstnew((*f)(lst->content));
		if (!(cursor->next))
		{
			ft_lstclear((&copy), del);
			return (NULL);
		}
		cursor = cursor->next;
		lst = lst->next;
	}
	return (copy);
}
