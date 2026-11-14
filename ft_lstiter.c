/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstiter.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/31 17:10:47 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/31 17:10:49 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_lstiter | void	ft_lstiter(t_list *lst, void (*f)(void *));
//	- Iterates through the list ’lst’ and applies the function ’f’ to the
//	  content of each node;
//	- lst: The address of a pointer to a node;
//	- f: The address of the function to apply to each node’s content;

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cur;

	if (!lst || !f)
		return ;
	cur = lst;
	while (cur)
	{
		f(cur->content);
		cur = cur->next;
	}
}
