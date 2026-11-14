/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/16 10:07:55 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/16 10:08:06 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//	ft_atoi | int atoi(const char *nptr);
//	- Converts the initial portion of the string pointed to by nptr to int;
//	- Return converted value or 0 on error;
//	- Skip any leading spaces;
//	- Allow a single leading '-' or '+';
//	- Do not allow other non-numerical characters;

#include "libft.h"

static int	is_space(char c);

int	ft_atoi(const char *nptr)
{
	long	nb;
	long	sign;

	sign = 1;
	nb = 0;
	while (is_space(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
		nb = (nb * 10) + ((*nptr++) - '0');
	nb *= sign;
	return ((int)nb);
}

static int	is_space(const char c)
{
	return (c == ' ' || c == '\r' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f');
}
