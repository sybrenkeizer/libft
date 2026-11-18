/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_substr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/19 12:31:18 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/19 12:31:19 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	ft_substr | char *ft_substr(char const *s, unsigned int start, size_t len);
//	- Check if arguments are valid;
//	- Allocate memory and return a substring from string ’s’;
//	- Substring starts at index ’start’ and has a maximum length of ’len’;
//	- If start is beyond end of string, return empty string from heap;
//	- When len is more than can be allocated (start + len > s), copy until
//	  s end;
//	- Return the substring or NULL if the allocation fails or arguments are
//	  invalid;

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if ((start + len) > slen)
		slen -= start;
	else
		slen = len;
	sub = malloc((slen + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, slen);
	*(sub + slen) = '\0';
	return (sub);
}
