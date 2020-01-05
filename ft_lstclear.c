#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    if ((*lst) == NULL || (*del) == NULL)
        return ;
    else
    {
        tmp = *lst;
        while ((*lst) != NULL)
        {
            tmp = tmp->next;
            (*del)((*lst)->content);
            free(*lst);
            *lst = tmp;
        }
        *lst = NULL;
    }
}
