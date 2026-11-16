/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_memchr.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nephcohe <nephco@learner.42.tech>                  /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/11/16 02:31:19 by nephcohe             |#######| |#|/#|    */
/*   Updated: 2026/11/16 02:36:12 by nephcohe                   |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* PROG ====i================================================================ */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				count;
	const unsigned char	*seg;

	seg = (const unsigned char *)s;
	count = 0;
	while (count < n)
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
/*
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
		printf("_member `%p` pour `%zu`\n",(const char *)result, playSize);
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
*/
/* ========================================================================== */
/* END ========================================================= 42_ ======== */
/* ============================================================= NEPHCODE === */
