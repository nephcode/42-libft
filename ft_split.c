/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_split.c                                               /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nephco <nephco@student.42.fr>                      /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/17 23:58:55 by nephco               |#######| |#|/#|    */
/*   Updated: 2026/08/22 07:44:22 by nephco                     |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h> // lib memory
#include <stddef.h> // lib def

// please clean comment in final compile
// ========================================================================== //
static size_t	wordcut(char const *word, char cuterie)
{
	size_t	count;
	size_t	ite;

	count = 0;
	ite = 0;
	while (word[ite]) //parcours toute la chaine 
	{
		// cette boucle cherche le separateur (pourrait etre un if)
		// chercher le plus efficace
		// on rentre dans la boucle on detecte le debut et la fin
		// puis on incremente count et on sort
		while (word[ite] == cuterie)
		{
			count++
			ite++
		}
	}
}

static	char *memory(char const *chain)
{
  //
  //malloc 
  //
  //return 
}

char	**ft_split(char const *s, char c)
{
	char *result;

	// memory s
	// call wordcut >> memory
	// free
	// s the string to be split
	// c the delimiter caracter
	char	result;
}
// ========================================================================== //
// ========================================================================== //
// ========================================================================== //
char display(char const *playS, char playC)
{
	split (playS, playC)
	free()
	printf
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf ("Merci de saisir deux arguments\n");
		return (1);
	}
	display(*argv[1], *argv[2]);
	return(0);
}

// ========================================================================== //
