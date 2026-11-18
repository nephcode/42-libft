/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strncmp.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/29 17:57:34 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/11/18 00:59:35 by nephcohe                   |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>
/* PROG ===================================================================== */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n && s1[count] && s2[count])
	{
		if (s1[count] != s2[count])
			return ((unsigned char)s1[count]
				- (unsigned char)s2[count]);
		count++;
	}
	if (count < n)
		return ((unsigned char)s1[count]
			- (unsigned char)s2[count]);
	return (0);
}
/* MAIN ===================================================================== */
/*
#include <stdio.h>
#include <stdlib.h>

void	display(const char *playS1, const char *playS2, size_t playN)
{
	int	result;

	printf("S1 :`%s`\n", playS1);
	printf("S2 :`%s`\n", playS2);
	printf("Size :`%zu`\n", playN);
	result = strncmp(playS1, playS2, playN);
	printf("Le result est `%d`\n", result);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		printf("Merci de saisir les 3 Arguments");
	else
	{
		display(argv[1], argv[2], atoi(argv[3]));
	}
	return (0);
}
*/
/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
