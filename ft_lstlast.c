/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstlast.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/29 13:19:56 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/29 13:19:58 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_lstlast | t_list	*ft_lstlast(t_list *lst);
//	- Return last node of the list;

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (NULL);
	current = lst;
	while (current->next)
		current = current->next;
	return (current);
}
