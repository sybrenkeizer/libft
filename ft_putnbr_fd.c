/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr_fd.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/19 08:51:33 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/19 08:51:37 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	ft_putnbr_fd | void ft_putnbr_fd(int n, int fd);
//	- Output the integer 'n' to the specified file descriptor;

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		else
		{
			write(fd, "-", 1);
			n *= -1;
		}
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar_fd(c, fd);
}
