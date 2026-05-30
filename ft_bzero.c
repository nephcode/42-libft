/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_bzero.c                                               /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/13 18:49:13 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/31 00:03:22 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
//#include "libft" // include define header and external lib declaratio
#include <stddef.h>
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

/* ========================================================== 42_ =========== */
/* END  ===================================================== NEPHCODE ====== */
/* ========================================================================== */
