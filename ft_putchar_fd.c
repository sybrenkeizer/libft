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

//	ft_putchar_fd | void ft_putchar_fd(char c, int fd);
//	- Output the character ’c’ to the specified file descriptor;

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
