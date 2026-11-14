/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memmove.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/05 14:38:34 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/05 14:38:38 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_memmove | void	*ft_memmove(void *dst, const void *src, size_t len);
//  - Copy n bytes from memory area src to memory area dest;
//  - The memory areas may overlap (dst > src) because of backwards copy;
//  - Return pointer to dest;

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (len--)
	{
		if (d < s)
			*(d++) = *(s++);
		else
			*(d + len) = *(s + len);
	}
	return (dst);
}
