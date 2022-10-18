#include"libft.h"

void	*dupint(int a)
{
	int	*p;

	p = malloc(sizeof(int) * a);
	p = &a;
	return (p);
}

void *func(void *a)
{
    // int x;
    // x = *a;
    // return(x * x);

    char *s;

    s = a;
    while (*s)
        {
            *s = ft_toupper(*s);
            s++;
        }
    return (a);
}
void del(void *new)
{
    free(new);
}

void	print(t_list *head)
{
	t_list	*current;

	current = head;
	while (current)
	{
		printf("%s\n", current->content);
		current = current->next;
	}
}

int	main(void)
{
	t_list	*head;
    t_list  *new;

	head = NULL;
	new = NULL;
	printf("the list is : \n");
	for (int i = 0; i < 5; i++)
	{
		ft_lstadd_back(&head, ft_lstnew(ft_strdup("HEllo")));
	}
	print(head);
    // printf("\n");
    new = ft_lstmap(head, func, del);
    printf("the new list is : \n");
    print(new);
    ft_lstdelone(new->next, del);
    print(new);
    printf("the old list is : \n");
    print(head);
}
