/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isascii.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/09/29 14:10:39 by sybkeize       #+#    #+#                */
/*   Updated: 2026/09/29 14:10:43 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_isascii | int	ft_isascii(int c);
//  - Check for an ascii value;
//  - Return > 0 if character c is an ascii value, or 0 if not;

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
