/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/05 21:29:45 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/05 21:29:54 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_strlcat | size_t	ft_strlcat(char *dst, const char *src, size_t size);
//  - Append the NUL-terminated string src to the end of dst;
//  - Append at most size - strlen(dst) - 1 bytes (size - dst - 1 > 0) or,
//    size - 1 > dst (and src > 0);
//  - NULL-terminate the result as long size > dst;
//  - If size < dst, don't concatenate and return size + src;
//  - If dst is not NULL-terminated within size bytes, strlcat assumes dst ==
//    size, does not copy anything, and returns size + src;
//  - Return total length of attempt (dst + src): truncation detection;

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	dst += dst_len;
	while (*src && --size > dst_len)
		*(dst++) = *(src++);
	*dst = '\0';
	return (src_len + dst_len);
}
