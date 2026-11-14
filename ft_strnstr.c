/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strnstr.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/08 12:21:34 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/08 12:21:36 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_strnstr | 
//  char	*ft_strnstr(const char *big, const char *little, size_t len);
//  - Locate  the  first occurrence of the null-terminated string little in
//    the string big, where not more than len characters are searched;
//

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ib;
	size_t	il;

	ib = 0;
	il = 0;
	if (!(*little))
		return ((char *)big);
	while (*(big + ib) && ib < len)
	{
		il = 0;
		while (((*(big + ib + il)) == *(little + il)) && (ib + il) < len)
		{
			il++;
			if (!(*(little + il)))
				return ((char *)(big + ib));
		}
		ib++;
	}
	return (NULL);
}
