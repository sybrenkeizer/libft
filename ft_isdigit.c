/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isdigit.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/09/29 14:12:55 by sybkeize       #+#    #+#                */
/*   Updated: 2026/09/29 14:12:59 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_isdigit | int	ft_isdigit(int c);
//  - Check for an numerical character;
//  - Return > 0 if character c is an numerical character, or 0 if not;

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
