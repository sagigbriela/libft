#include <libft.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
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

//     t_list *current_node = head;
//     while (current_node != NULL)
//     {
//         printf("%s\n", (char*)current_node->content);
//         current_node = current_node->next;
//     }

//     return 0;
// }