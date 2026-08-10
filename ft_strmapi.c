/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strmapi.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nephco <nephco@student.42.fr>                      /#/ 0x2A /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/16 04:03:16 by nephco               |#######| |#|/#|    */
/*   Updated: 2026/08/10 04:42:02 by nephco                     |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
/* ========================================================================== */
static size_t ft_strlen(const char *chain)
{
	const char	 *value;

	value = chain;
	while(*value)
	{
		value++;
	}
	return (value - chain);
}

// -------------------------------------------------------------------------- //

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	size_t			length;
	char			*value;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	value = (char *)malloc(sizeof(char) * (length + 1));
	if (!value)
		return (NULL);
	count = 0;
	while(count < length)
	{
		value[count] = f(count, s[count]);
		count++;
	}
	value[count] = '\0';
	return (value);

}
/* ========================================================================== */
#include <stdio.h>

static char	ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

static char	up_adapter(unsigned int index, char c)
{
	(void)index;
	return ((char)ft_toupper(c));
}

static void	display(char *play_s) 
{
	char *result;

	printf("Avant : `%s`\n", play_s);
	result = ft_strmapi(play_s, up_adapter);
	if (!result)
		return;
	printf("Apres : `%s`\n", result);
	free(result);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("merci de saisir un argument\n");
		return (1);
	}
	display(argv[1]);
	return (0);
}

/* ========================================================================== */
/* END ====================================================================== */
/* ========================================================================== */
