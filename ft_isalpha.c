/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isalpha.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/09/29 14:10:03 by sybkeize       #+#    #+#                */
/*   Updated: 2026/09/29 14:10:06 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_isalpha | int	ft_isalpha(int c);
//  - Check for an alphabetic character;
//  - Return > 0 if character c is an alphabetic character, or 0 if not;

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
