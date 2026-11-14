/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strjoin.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/22 09:14:39 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/22 09:14:41 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_strjoin | char	*ft_strjoin(char const *s1, char const *s2);
//	- Check for existence argument(s);
//	- Allocate memory for concatenation s1 and s2;
//	- Return concatenated string or NULL if allocation fails or has invalid
//	  argument(s);

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc((len + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	while (*s1)
		*(joined++) = *(s1++);
	while (*s2)
		*(joined++) = *(s2++);
	*joined = '\0';
	return (joined - len);
}
