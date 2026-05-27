/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strchr.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/13 13:47:45 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/27 21:11:56 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */

/* PROG ===================================================================== */
char	*strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == (char)c)
		{
			return ((char *)&s[count]);
		}
		count++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[count]);
	}
	return (0);
}
/* MAIN ===================================================================== */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void	display(const char *playS, int playC)
{
	const char	*result;

	printf("Search `%d` in `%p`\n", playC, playS);
	result = strchr(playS, playC);
	printf("Memory location is `%p`\n", result);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Merci de saisir les deux Arguments");
	}
	else
	{
		display(argv[1], argv[2][0]);
	}
	return (0);
}

/* ========================================================================== */
/* END ========================================================= 42_ ======== */
/* ============================================================= NEPHCODE === */
