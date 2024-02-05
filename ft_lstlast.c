#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		last_node;
	t_list	*dest;

	last_node = ft_lstsize(lst);
	dest = lst;
	while (last_node > 1)
	{
		dest = dest->next;
		last_node--;
	}
	return (dest);
}

// int main()
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("First node");
//     t_list *node2 = ft_lstnew("Second node");
//     t_list *node3 = ft_lstnew("Third node");

//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);

//     t_list *last_node = ft_lstlast(head);
//     if (last_node != NULL)
//     {
//         printf("The last node is: %s\n", (char*)last_node->content);
//     }
//     else
//     {
//         printf("The list is empty.\n");
//     }

//     return 0;
// }