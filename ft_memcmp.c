/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_memcmp.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/19 03:07:05 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/20 16:10:56 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>
/* PROG ===================================================================== */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				count;
	const unsigned char	*c1;
	const unsigned char	*c2;
	
	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	count = 0;
	while(count < n)
	{
		if (c1[count] != c2[count])
			return (c1[count] - c2[count]);
		count++;
	}
	return (0);
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
		printf("le resultat est `%d`\n", compare);
	}
}
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		display(argv[1], argv[2], atoi(argv[3]));
	}
	else
	{
		printf("merci de saisir trois arguments\n");
	}
}

/* ========================================================================== */
/* END ====================================================== 42_ =========== */
/* ========================================================== NEPHCODE ====== */
