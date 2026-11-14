/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putchar_fd.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/19 07:46:13 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/19 07:46:16 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	ft_putendl_fd | void ft_putendl_fd(char *s, int fd);
//	- Output the string ’s’ to the specified file descriptor followed by a
//	  newline;

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
