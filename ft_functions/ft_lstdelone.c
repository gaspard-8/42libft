#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	//lst->next = NULL; usefule or not ??, deletes the adress (prob similarly to *del(content))
	free(lst);
}
