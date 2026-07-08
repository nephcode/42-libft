/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strmapi.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nephco <nephco@student.42.fr>                      /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/16 04:03:16 by nephco               |#######| |#|/#|    */
/*   Updated: 2026/07/08 23:50:04 by nephco                     |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/* ========================================================================== */
static size_t ft_strlen(char *chain)
{
	char	 *value;

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
	if (value == 0)
		return (0);
	if (!value)
		return (NULL);
	count = 0;
	while(count < length)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);

}
/* ========================================================================== */
static void upAdapter()
{
	void index;
	ft_toupper();
}

static void	display (char *playS, char) 
{
	char *result;
	printf("avant")
	result = stra
	printf("Apres")
}

int main (argc, argv)
{
	return (1)

		display(arg[1]);
	return (0);
}

/* ========================================================================== */
/* END ====================================================================== */
/* ========================================================================== */
