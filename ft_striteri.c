/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_striteri.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/22 11:27:49 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/24 01:39:08 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_striteri | char *ft_striteri(char const *s, char (*f)(unsigned int,
//	char));
//	- Validate arguments;
//	- Apply function f to each character of the string s, passing its index as
//	  the first argument and the character itself as the second;
//	- Original string (s) is mutated, unlike ft_strmap where a new string is
//	  created with the aplications of f;

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			slen;

	if (!s || !f)
		return ;
	i = 0;
	slen = ft_strlen(s);
	while (i < slen)
		f((i++), (s++));
	*s = '\0';
}
