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

static int	get_num_digits(int n);

char	*ft_itoa(int n)
{
	char	*pnb;
	int		nlen;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nlen = get_num_digits(n);
	pnb = malloc((nlen + 1) * sizeof(char));
	if (!pnb)
		return (NULL);
	*(pnb + nlen) = '\0';
	if (n < 0)
	{
		n *= -1;
		pnb[0] = '-';
	}
	while (nlen-- && *(pnb + nlen) != '-')
	{
		*(pnb + nlen) = n % 10 + '0';
		n /= 10;
	}
	return (pnb);
}

static int	get_num_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0 || n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
