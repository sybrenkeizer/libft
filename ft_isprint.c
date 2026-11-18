/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isprint.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/09/29 14:15:07 by sybkeize       #+#    #+#                */
/*   Updated: 2026/09/29 14:15:09 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//  ft_isprint | int	ft_isprint(int c);
//  - Check for a printable character;
//  - Return > 0 if character c is printable, or 0 if not;

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}
