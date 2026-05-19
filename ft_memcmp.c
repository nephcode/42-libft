/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_memcmp.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/19 03:07:05 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/19 08:05:58 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>
/* PROG ===================================================================== */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				count;
	char unsigned	c1;
	char unsigned	c2;
	
	count = 0;
	while(count < n)
	{
		
	}
}

/* MAIN  ==================================================================== */
#include <stdio.h>
#include <stdlib.h>

void	display(const void *play1, const void *play2, size_t playSize)
{
	int compare;

	compare = ft_memcmp(play1, play2, playSize);
	if (compare == 0)
	{
		printf("Le resultat est de 0\n");
	}
	else
	{
		print("le resultat est `%d`\n", &compare);
	}
}
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		display(argv[1], argv[2], atoi(agv[3]);
	}
	else
	{
		prinft("merci de saisir trois arguments);
	}
}

/* ========================================================================== */
/* END ====================================================== 42_ =========== */
/* ========================================================== NEPHCODE ====== */
