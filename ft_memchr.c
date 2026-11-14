/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memchr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/06 14:03:45 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/06 14:03:48 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_memchr | void *memchr(const void *s, int c, size_t n);
//  - Scan n bytes of the memory area s for the first instance of c;
//  - Both c and s are to be interpreted as unsigned char;
//  - Return pointer to matching byte in s or NULL if c is not found;

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
