/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_bzero.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/05 13:22:23 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/05 13:22:25 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_bzero | void	ft_bzero(void *b, size_t len);
//  - Erase data for n bytes of the memory starting at the location pointed to
//    by s, by writing zeros to that area.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
