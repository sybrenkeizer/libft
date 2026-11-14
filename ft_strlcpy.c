/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/05 20:26:04 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/05 20:26:07 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_strlcpy | size_t	ft_strlcpy(char *dst, const char *src, size_t size);
//  - Copy up to size - 1 characters from NUL-terminated string src to dst,
//    NULL-terminating the result;
//  - Return total length the attempt (src);
//  - If size == 0, the result is not NULL-terminated;

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		slen;

	slen = ft_strlen(src);
	if (!size)
		return (slen);
	while (*src && --size)
		*(dst++) = *(src++);
	*dst = '\0';
	return (slen);
}
