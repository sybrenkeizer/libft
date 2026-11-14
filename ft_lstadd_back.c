/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstadd_back.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/29 13:44:44 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/29 13:44:45 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_lstadd_back | void	ft_lstadd_back(t_list **lst, t_list *new);
//	- Add node ’new’ at the end of the list;
//	- lst: The address of a pointer to the first node of a list;
//	- new: The address of a pointer to the node to be added;

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
