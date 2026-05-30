/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_bzero.c                                               /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/13 18:49:13 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/30 04:12:49 by nephco                     |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */
#include "libft" // include define header and external lib declaration

/* PROG ===================================================================== */
void	ft_bzero(void *s, size_t n)
{
	unsigned char *octet;
	size_t	count;

	octet = (unsigned char *)s;
	count = 0;
	while (count < octect)
	{
		octet(count++) = 0;
	}
}

/* MAIN ===================================================================== */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void	display(void playS, size_t playN)
{
	printf("\n", playS, playN);
	ft_bzero(playS, playN);
	printf();


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
