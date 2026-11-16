/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_bzero.c                                               /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nephcohe <nephco@learner.42.tech>                  /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/11/16 02:19:22 by nephcohe             |#######| |#|/#|    */
/*   Updated: 2026/11/16 02:20:05 by nephcohe                   |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/* PROG ===================================================================== */
void	ft_bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*octet;

	octet = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		octet[count] = 0;
		count++;
	}
}
/* MAIN ===================================================================== */
/*
#include <stdio.h>
#include <stdlib.h>
//#include <stddef.h>

void	display(char *playS, size_t playN)
{
		printf("Chaine :`%s` longueur `%zu`\n", playS, playN);
	ft_bzero(playS, playN);
	printf("Apres `%s`\n", playS);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("merci de saisir les deux Arguments");
	else
	{
		display(argv[1], atoi(argv[2]));
	}
	return (0);
}
*/
/* ========================================================== 42_ =========== */
/* END  ===================================================== NEPHCODE ====== */
/* ========================================================================== */
