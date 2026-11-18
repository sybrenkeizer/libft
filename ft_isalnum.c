/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isalnum.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/09/29 14:08:06 by sybkeize       #+#    #+#                */
/*   Updated: 2026/09/29 14:08:08 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_isalnum | int	ft_isalnum(int c);
//  - Check for an alphanumeric character;
//  - Return > 0 if character c falls into the tested class, or 0 if not.

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
