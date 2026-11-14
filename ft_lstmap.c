/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstmap.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/31 17:21:40 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/31 17:21:41 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_lstmap | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), 
//				void (*del)(void *));
//	- Iterate through the list ’lst’ and apply ’f’ to each node’s content,
//	  creating a new list out of the successive applications of the ’f’;
//	- The ’del’ function is used to delete the content of a node if needed;
//	- lst: The address of a pointer to a node;
//	- f: The address of the function applied to each node’s content;
//	- del: The address of the function used to delete a node’s content if
//	  needed;
//	- Any problem allocating a new node should clear the newly made list, AND
//	the allocated memory by f - this has not been added yet to the list.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		cont = f(lst->content);
		new_node = ft_lstnew(cont);
		if (!new_node)
		{
			del(cont);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
