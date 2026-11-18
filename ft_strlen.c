/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/09/29 14:32:37 by sybkeize       #+#    #+#                */
/*   Updated: 2026/09/29 14:32:44 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

// ft_strlen | size_t	ft_strlen(const char *s);
// - Return length (in bytes) of s, excluding terminating null byte;

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}
