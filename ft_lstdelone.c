#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

// void del(void *content)
// {
//     free(content);
// }
// int main()
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew(strdup("First node"));
//     t_list *node2 = ft_lstnew(strdup("Second node"));
//     t_list *node3 = ft_lstnew(strdup("Third node"));
//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);

//     printf("Before deletion:\n");
//     t_list *current_node = head;
//     while (current_node != NULL)
//     {
//         printf("%s\n", (char*)current_node->content);
//         current_node = current_node->next;
//     }

//     printf("\nAfter deletion:\n");
//     ft_lstdelone(node2, del);
//     current_node = head;
//     while (current_node != NULL)
//     {
//         printf("%s\n", (char*)current_node->content);
//         current_node = current_node->next;
//     }

//     return 0;
// }