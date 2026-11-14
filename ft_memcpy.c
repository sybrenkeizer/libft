/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memcpy.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/05 13:50:34 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/05 13:50:36 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_memcpy | void	*ft_memcpy(void *dst, const void *src, size_t len);
//  - Copy n bytes from memory area src to memory area dest;
//  - The memory areas must not overlap (dst > src);
//  - If source is truncated (len < src), no NULL-byte is copied; 
//  - Return a pointer to dest;

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (len--)
		*(d++) = *(s++);
	return (dst);
}
