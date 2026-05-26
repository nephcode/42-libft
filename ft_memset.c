/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_memset.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/25 14:54:26 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/26 13:06:41 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <strings.h>
/* PROG ===================================================================== */
void *ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*p;

	p = (unsigned char*)s;
	count = 0;
	while  (count < n)
	{
		p[count] = (unsigned char)c;
		count++;
	}
	return (s);
}
/* MAIN ===================================================================== */
#include <stdio.h>
#include <stdlib.h>

void display(void *playS, int playC, size_t playN)
{
	unsigned char *result;

	printf("Avant : `%s`, Incr `%d`\n", (char *)playS, playC);
	printf("Ram : `%p`, Repeat : `%zu`\n", playS, playN);
	result = ft_memset(playS, playC, playN);
	printf("==========================\n");
	printf("Apres : `%s`\n, Incr : `%d`\n", (char *)result, playC);
	printf("Ram : `%p`, Repeat : `%zu`\n", result, playN);
}

int main (int argc, char **argv)
{
	//char init[] = "ceci est la chaine initiale";
	if (argc != 4)
		printf("Nombre d'argument non valide");
	else
	{
	//	display(init, argv[2][0], atoi(argv[3]));
	//	printf("\n");
		display(argv[1], argv[2][0], atoi(argv[3]));
	}
	return (0);
}
/* ========================================================================== */
/* END =================================================== 42_ ============== */
/* ======================================================= NEPHCODE ========= */

