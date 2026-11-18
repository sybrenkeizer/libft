/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstsize.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/29 12:48:49 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/29 12:51:37 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_lstsize | int	ft_lstsize(t_list *lst);
//	- Count nodes in the list;
//	- Return the length of the list;

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		n;
	t_list	*current;

	if (!lst)
		return (0);
	current = lst;
	n = 0;
	while (current)
	{
		n++;
		current = current->next;
	}
	return (n);
}
