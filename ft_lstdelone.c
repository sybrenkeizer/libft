/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstdelone.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/31 16:32:18 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/31 16:32:19 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_lstdelone | void	ft_lstdelone(t_list *lst, void (*del)(void *));
//	- Takes a node as parameter and frees its content using the function ’del’;

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
