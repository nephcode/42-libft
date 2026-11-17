/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_split.c                                               /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nephcohe <nephco@learner.42.tech>                  /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/11/16 03:36:22 by nephcohe             |#######| |#|/#|    */
/*   Updated: 2026/11/17 17:17:07 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// PROG ===================================================================== //

static size_t	memory(char const *s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word_count + 1);
}
// -------------------------------------------------------------------------- //

static char	*wordcut(char const *s, char c, size_t *i)
{
	char	*ptr;
	size_t	j;
	size_t	k;

	j = 0;
	k = *i;
	while (s[k] != c && s[k])
		k++;
	ptr = malloc(sizeof(char) * ((k - *i) + 1));
	if (!ptr)
		return (NULL);
	while (s[*i] != c && s[*i])
	{
		ptr[j] = s[*i];
		(*i)++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
// -------------------------------------------------------------------------- //

static char	**freeall(char **array, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}
// -------------------------------------------------------------------------- //

static char	**place(char **array, size_t j)
{
	array[j] = NULL;
	return (array);
}
// -------------------------------------------------------------------------- //

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**array;

	array = malloc(sizeof(char *) * memory(s, c));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			array[j] = wordcut(s, c, &i);
			if (!array[j])
				return (freeall(array, j));
			j++;
		}
		else
			i++;
	}
	return (place(array, j));
}
// ========================================================================== //
// ========================================================================== //
// ========================================================================== //
/*
char display(char const *playS, char playC)
{
	split (playS, playC)
	free()
	printf
}

int	main(int argc, char **argv)
{
// make code:	
	return(0);
}
*/
// ========================================================================== //
