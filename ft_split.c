/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_split.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: sybkeize <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/29 09:28:45 by sybkeize       #+#    #+#                */
/*   Updated: 2026/10/29 09:28:48 by sybkeize       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//	ft_split | char	**ft_split(char const *s, char c);
//	- Allocates memory for array of strings obtained by splitting ’s’ string
//	  with the character ’c’ as a delimiter;
//	- Each string in the returned array is allocated independently;
//	- The array of pointers itself is also allocated dynamically;
//	- The returned array must be NULL terminated.
//	- Return array of new strings resulting from the split or NULL if any
//	  allocation fails;
//	- The returned structure will be released by first freeing its components,
//	  then its pointer;

static size_t	count_substr(char const *s, char c);
static int		free_strings(char **strings, size_t i);

char	**ft_split(char const *s, char c)
{
	const char	*str;
	char		**strings;
	size_t		i;
	size_t		num_substr;

	num_substr = count_substr(s, c);
	strings = malloc((num_substr + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	while (i < num_substr)
	{
		while (*s == c)
			s++;
		str = s;
		while (*s && *s != c)
			s++;
		strings[i] = ft_substr(str, 0, s - str);
		if (!free_strings(strings, i))
			return (NULL);
		i++;
	}
	strings[i] = NULL;
	return (strings);
}

static size_t	count_substr(char const *s, char c)
{
	size_t	n;
	int		in_substr;

	n = 0;
	in_substr = 0;
	while (*s)
	{
		if (*(s++) == c)
			in_substr = 0;
		else if (!in_substr)
		{
			in_substr = 1;
			n++;
		}
	}
	return (n);
}

static int	free_strings(char **strings, size_t i)
{
	if (!strings[i])
	{
		while (i--)
			free(strings[i]);
		free(strings);
		return (0);
	}
	return (1);
}
