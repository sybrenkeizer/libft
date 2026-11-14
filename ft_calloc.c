/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_calloc.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/16 11:04:31 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/16 11:04:34 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_calloc || void *ft_calloc(size_t nmemb, size_t size);
//	- Allocate memory for an array of nmemb elements of size bytes each;
//	- Return a pointer to the allocated memory;
//	- Memory is set to zero;
//	- If nmemb or size is 0, then calloc() returns either NULL, or a unique
//	  pointer value that can later be successfully passed to free();
//	- If the multiplication of nmemb and size would result in integer overflow,
//	  then calloc() returns an error;

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;

	if (!nmemb && !size)
	{
		p = malloc(0);
		return (p);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
