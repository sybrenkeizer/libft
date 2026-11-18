/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strchr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/06 11:56:56 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/06 11:56:58 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

// ft_strchr | char	*ft_strchr(const char *s, int c);
// - Return pointer to the first occurrence of char c in the char *s or NULL
//   if the character is not found;
// - The terminating null byte is part of the string;

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c < 0)
		return (NULL);
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
