/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strnstr.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/31 18:37:23 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/31 22:49:40 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */

/* PROG  ==================================================================== */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
search != '\0'

if (little empty)
	return big
if (little OK but not match)
	return null
if (little Ok and MATCH)
	return pointer to first caracter occurence

}

/* MAIN ===================================================================== */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
void	display(const char *playB, const char *playL, size_t playN)
{
	const char result;

	printf("Big : `%s`\n", playB);
	printf("Little : `%s`\n", playL);
	printf("Taille : `%zu`\n", playN);
	result = ft_strnstr(playB, playL, playN);
	if (result == 0)
		printf ("Len 0 > Return :`%s`\n", playB);
	if (
		printf("Rien"
	if (
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		printf("Merci de saisir les 3 arguments du main");
	else
	{
		display(argv[1], argv[2], atoi(arg[3]));
	}
	return (0);
}

/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
