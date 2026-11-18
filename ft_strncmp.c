/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/06 12:55:54 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/06 12:55:57 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_strncmp | int	ft_strncmp(const char *s1, const char *s2, size_t n);
//  - Compare strings s1 and s2 for the first (at most) n bytes;
//  - Returns an integer indicating the result of the comparison:
//    - 0, if the s1 and s2 are equal;
//    - a negative value if s1 is less than s2;
//    - a positive value if s1 is greater than s2;

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && (*s1 || *s2))
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
