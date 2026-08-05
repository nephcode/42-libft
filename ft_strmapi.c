/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strmapi.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nephco <nephco@student.42.fr>                      /#/ 0x2A /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/16 04:03:16 by nephco               |#######| |#|/#|    */
/*   Updated: 2026/08/05 23:38:55 by nephco                     |#|  NEPH     */
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
// verifier la fonction 
/* ========================================================================== */
#include <stdio.h>
// je dois reprendre ici le code ste plaait neph, fait le je suis perdyu:
static char	ft_toupper(unsigned int i, char c)
{
    (void)i;  // On n'utilise pas l'index ici, mais il est disponible
    if (c >= 'a' && c <= 'z')
        return (c - 32);  // Transforme en majuscule
    return (c);
}

static void upAdapter()
{
	void index;
	ft_toupper();
}
// reprendre le code 
static void	display (char *playS, char) 
{
	char *result;

	printf("Avant", %s\n, playS)
	result = strmapi(playS, upAdapter);
	printf("Apres")
	free(result)
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
