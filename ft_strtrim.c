/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strtrim.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/22 11:38:11 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/22 11:38:13 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_strtrim | char	*ft_strtrim(char const *s1, char const *set);
//	- Validate s1;
//	- Return the trimmed string and NULL if the allocation fails or s1 is
//	  invalid;

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;

	slen = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		slen--;
	}
	while (*s1 && ft_strchr(set, s1[slen - 1]))
		slen--;
	return (ft_substr(s1, 0, slen));
}
