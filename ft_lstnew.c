#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = (t_list *) malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}

// int main()
// {
//     t_list *node;
//     char *content = "Hello, world!";
//     node = ft_lstnew(content);
//     if (node != NULL) {
//         printf("%s\n", (char *)node->content);
//     }
//     free(node);
//     return 0;
// }