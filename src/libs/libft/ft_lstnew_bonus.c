#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
int main(void)
{
	char *contenu = "Bonjour";
	t_list *result = ft_lstnew(contenu);
	printf("%s\n", result->content);
}
*/
