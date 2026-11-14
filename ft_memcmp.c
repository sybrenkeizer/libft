/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memcmp.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/08 10:55:26 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/08 10:55:34 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_memcmp | int	ft_memcmp(const void *s1, const void *s2, size_t n);
//  - Compare the first n bytes of memory areas s1 and s2;
//  - Each byte is interpreted as unsigned char;
//  - Return the first occurance of difference within n bytes;

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
