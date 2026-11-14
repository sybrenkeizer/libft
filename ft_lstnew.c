/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstnew.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/29 12:03:45 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/29 12:03:47 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	ft_lstnew | t_list	*ft_lstnew(void *content);
//	- Allocates memory for a new node;
//	- The ’content’ member variable is initialized with the given parameter
//	  ’content’;
//	- The variable ’next’ is initialized to NULL;
//	- Return pointer to the new node;

t_list	*ft_lstnew(void *content)
{
	t_list	*root;

	root = malloc(sizeof(t_list));
	if (!root)
		return (NULL);
	root->content = content;
	root->next = NULL;
	return (root);
}
