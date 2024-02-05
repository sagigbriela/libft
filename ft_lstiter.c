#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void print_content(void *content)
// {
//     printf("%s\n", (char*)content);
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

//     printf("Before applying function:\n");
//     t_list *current_node = head;
//     while (current_node != NULL)
//     {
//         printf("%s\n", (char*)current_node->content);
//         current_node = current_node->next;
//     }

//     printf("\nAfter applying function:\n");
//     ft_lstiter(head, print_content);

//     return 0;
// }