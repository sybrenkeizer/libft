/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstadd_front.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/29 12:27:25 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/29 12:27:27 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_lstadd_front | void	ft_lstadd_front(t_list **lst, t_list *new);
//	- Add node ’new’ at the beginning of the list;

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
