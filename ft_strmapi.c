/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strmapi.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/22 11:27:49 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/24 01:39:38 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_strmapi | char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
//	- Validate arguments;
//	- Apply function f to each character of the string s to allocated memory,
//	  passing its index as the first argument and the character itself as the
//	  second;
//	- A string is created to store the results from the successive applications
//	  of f;
//	- In contrast to ft_striteri, a new string with applications of f is
//	  created;
//	- Return the string created from the successive applications of ’f’ or NULL
//	  if the allocation fails or argument(s) are invalid;

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;
	size_t			slen;

	if (!s || !f)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	ptr = malloc((slen + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < slen)
		*(ptr++) = f((i++), *(s++));
	*ptr = '\0';
	return (ptr - slen);
}
