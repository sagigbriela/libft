#include <libft.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*aux;
	void	*temp;

	dest = NULL;
	while (lst)
	{
		temp = f(lst->content);
		aux = ft_lstnew(temp);
		if (!aux)
		{
			ft_lstclear(&dest, del);
			del(temp);
			return (dest);
		}
		ft_lstadd_back(&dest, aux);
		lst = lst->next;
	}
	return (dest);
}