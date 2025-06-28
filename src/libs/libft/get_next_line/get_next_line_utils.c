#include "get_next_line.h"

void	free_all(t_list_gnl *lst)
{
	t_list_gnl	*current;
	t_list_gnl	*next;

	current = lst;
	while (current)
	{
		free(current->content);
		next = current->next;
		free(current);
		current = next;
	}
}

int	found_a_count(t_list_gnl *lst, const char *str, int flag, int count)
{
	if (flag == 1)
	{
		if (!lst)
			return (0);
		while (lst != NULL && lst->next != NULL)
			lst = lst->next;
		while (lst->content[count] != '\0')
		{
			if (lst->content[count] == '\n')
				return (1);
			count++;
		}
		return (0);
	}
	if (flag == 2)
	{
		while (str[count] != '\0')
			count++;
		return (count);
	}
	return (42);
}

void	reset_lst(t_list_gnl **lst, int count, int count_2, t_list_gnl *clean)
{
	t_list_gnl	*last;

	clean = mk_clean(lst);
	if (clean == NULL)
		return ;
	clean->next = NULL;
	last = *lst;
	while (last != NULL && last->next != NULL)
		last = last->next;
	while (last->content[count] && last->content[count] != '\n')
		count++;
	if (last->content && last->content[count] == '\n')
		count++;
	clean->content = malloc(sizeof(char)
			* ((found_a_count(*lst, last->content, 2, 0) - count) + 1));
	if (clean->content == NULL)
	{
		so_free(lst);
		return (free(clean));
	}
	while (last->content[count])
		clean->content[count_2++] = last->content[count++];
	clean->content[count_2] = '\0';
	free_all(*lst);
	*lst = clean;
}

t_list_gnl	*mk_clean(t_list_gnl **lst)
{
	t_list_gnl	*clean;

	clean = malloc(sizeof(t_list_gnl));
	if (!lst || !clean)
	{
		so_free(lst);
		return (NULL);
	}
	return (clean);
}

char	*so_free(t_list_gnl **lst)
{
	if (*lst == NULL)
		return (NULL);
	free_all(*lst);
	*lst = NULL;
	return (NULL);
}
