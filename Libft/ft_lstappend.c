#include "libft.h"

void			ft_lstappend(t_list *list, t_list *new)
{
	t_list		*cur;

	if (list && new)
	{
		cur = list;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = new;
		new->next = NULL;
	}
}
