/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_memchr.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/16 21:36:49 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/20 22:03:48 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>
/* PROG ===================================================================== */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t count;
	const unsigned char *seg;

	seg = (const unsigned char *)s;
	count = 0;
	while(count < n)
	{
		if (seg[count] == (unsigned char)c)
		{
			return ((void *)&seg[count]);
		}
		count++;
	}
	return (0);
}

/* MAIN ===================================================================== */
#include <stdio.h>
#include <stdlib.h>
void display(const void *play, int playInt, size_t playSize)
{
	const unsigned char *result;

	printf("%s\n", (const char *)play);
	result = ft_memchr(play, playInt, playSize);
	if (result == 0)
		printf("_memchr retourne zero\n");
	else
		printf("_member retourne l'adresse `%p` pour `%zu`\n",(const char *)result, playSize);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		display(argv[1], argv[2][0], (size_t)atoi(argv[3]));
	}
	else
	{
		printf("Merci de saisir les trois arguments\n");
	}
}
/* ========================================================================== */
/* END ========================================================= 42_ ======== */
/* ============================================================= NEPHCODE === */
