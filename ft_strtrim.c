/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strtrim.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nephco <nephco@student.42.fr>                      /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/12 02:03:17 by nephco               |#######| |#|/#|    */
/*   Updated: 2026/06/12 03:52:21 by nephco                     |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/* PROG ===================================================================== */

//import strlen
//import ft_substr();

// -------------------------------------------------------------------------- //

char	*ft_strtrim(char const *s1, char const *set)
{
 // while s1> head skip set // i= 0 // i++
 // head in cache
 // while head by end // tail skip set
 // cache tail
 // malloc (tail)
 // return tail \0

}
/* MAIN ===================================================================== */
#include <stdio.h>

static void	display(char const *play1, char const *play2)
{
	char *playMain;
	printf("Chain : `%s`\n, Trim : `%s`\n", play1, play2);
	playMain = ft_strtrim(play1, play2);
	printf("Exit : `%s`\n", playMain);
	free(playMain);
}

// ---------------------------------------------------------------------------//

int	main(int argc, char **argv)
{
	if ( argc != 3)
	{
		printf(" Merci de saisir les 2 arguments\n");
		return (1);
	}
	display(argv[1], argv[2]);
	return (0);
}

/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
