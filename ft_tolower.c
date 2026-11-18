/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_tolower.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/05 22:45:04 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/05 22:45:15 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

// ft_tolower | int	ft_tolower(int c);
// - Convert uppercase letters to lowercase;

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - 'A' + 'a';
	return (c);
}
