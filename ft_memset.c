/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memset.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/09/29 14:58:21 by sybkeize       #+#    #+#                */
/*   Updated: 2026/09/29 14:58:23 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_memset | void	*ft_memset(void *b, int c, size_t len);
//  - Fill the first n bytes of the memory area pointed to by s with the
//	  constant byte c;
//  - Returns a pointer to memory area s;

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len--)
		*p++ = (unsigned char)c;
	return (b);
}
