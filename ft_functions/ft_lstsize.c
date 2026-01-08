#include "libft.h"

int	ft_lstsize(t_list *lst);

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list *cursor;

	cursor = lst;
	i = 0;
	while (cursor != NULL)
	{
		cursor = cursor->next;
		i++;
	}
	return (i);
}
