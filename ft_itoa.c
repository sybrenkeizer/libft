/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_itoa.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/19 09:07:01 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/19 09:07:04 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	ft_itoa.c | char *ft_itoa(int n);
//	- Allocates memory and return a string representing the integer received
//	  as an argument;
//	- Negative numbers must be handled;
//	- Return string representing the integer, or NULL if the allocation fails;

static int	get_num_digits(long n);

char	*ft_itoa(int n)
{
	char	*pnb;
	int		nlen;
	long	nbr;

	nbr = (long)n;
	nlen = get_num_digits(nbr);
	pnb = ft_calloc((nlen + 1), sizeof(char));
	if (!pnb)
		return (NULL);
	*(pnb + nlen) = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		pnb[0] = '-';
	}
	while (nlen-- && *(pnb + nlen) != '-')
	{
		*(pnb + nlen) = nbr % 10 + '0';
		nbr /= 10;
	}
	return (pnb);
}

static int	get_num_digits(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0 || nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
