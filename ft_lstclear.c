/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstclear.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/31 16:50:47 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/31 16:50:49 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_lstclear | void ft_lstclear(t_list **lst, void (*del)(void *));
//	- Deletes and frees the given node and all its successors, using the
//	- function ’del’ and free(3);
//	- Set the pointer to the list to NULL;
//	- lst: The address of a pointer to a node;
//	- del: The address of the function used to delete the content of the node;

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur;
	t_list	*next;

	if (!lst || !del || !(*lst))
		return ;
	next = *lst;
	while (next)
	{
		cur = next;
		next = next->next;
		del(cur->content);
		free(cur);
	}
	*lst = NULL;
}
