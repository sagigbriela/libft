#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	i = 0;
	current = lst;
	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}

// int main()
// {
//     t_list *head = NULL;
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//     char *content1 = "Node 1";
//     char *content2 = "Node 2";
//     char *content3 = "Node 3";
//     node1 = ft_lstnew(content1);
//     ft_lstadd_front(&head, node1);
//     node2 = ft_lstnew(content2);
//     ft_lstadd_front(&head, node2);
//     node3 = ft_lstnew(content3);
//     ft_lstadd_front(&head, node3);
//     printf("The list has %d nodes.\n", ft_lstsize(head));
//     // Remember to free the nodes when you're done with them
//     free(node1);
//     free(node2);
//     free(node3);

// }