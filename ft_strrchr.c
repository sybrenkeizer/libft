/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strrchr.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/06 12:15:57 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/06 12:15:59 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

// ft_strrchr | char	*ft_strrchr(const char *s, int c);
// - Return pointer to the last occurrence of char c in the char *s or NULL
//   if the character is not found;
// - The terminating null byte is part of the string;

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	if (c < 0)
		return (NULL);
	p = s + ft_strlen(s);
	while (p >= s)
	{
		if ((unsigned char)*p == (unsigned char)c)
			return ((char *)p);
		p--;
	}
	return (NULL);
}
