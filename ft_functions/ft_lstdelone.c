#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		(*del)(lst->content);
	free(lst);
	//lst->next = NULL; usefule or not ??, deletes the adress (prob similarly to *del(content))

}
