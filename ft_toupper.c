/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_toupper.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/05 22:26:08 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/05 22:26:10 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

// ft_toupper | int	ft_toupper(int c);
// - Convert lowercase letters to uppercase;

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	return (c);
}
