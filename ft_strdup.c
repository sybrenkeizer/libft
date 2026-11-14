/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strdup.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/16 13:54:32 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/16 13:54:35 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_strdup | char *strdup(const char *s);
//	- Duplicate string s with memory obtained by malloc;
//	- Return pointer to duplicated string or NULL if allocation fails;

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	slen;

	slen = ft_strlen(s);
	p = malloc((slen + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s, slen + 1);
	return (p);
}
