#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_ptr;

	lst_ptr = lst;
	if (!lst)
		return ;
	while (lst_ptr)
	{
		f(lst_ptr->content);
		lst_ptr = lst_ptr->next;
	}
}
