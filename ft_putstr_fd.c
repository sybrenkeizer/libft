/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr_fd.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/19 08:52:06 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/19 08:52:11 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	ft_putstr_fd | void ft_putchar_fd(char *s, int fd);
//	- Output the string ’s’ to the specified file descriptor;

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}
