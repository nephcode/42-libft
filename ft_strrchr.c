/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strrchr.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/27 21:14:50 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/29 04:44:26 by nephco                     |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
/* PROG ===================================================================== */
static int	len(char *chain)
{
	int	count;

	count = 0;
	while (chain[count] != '\0')
	{
		count++;
	}
	return (count);
}
// ----------------------------------------------------------------------------

char	*strrchr(const char *s, int c)
{
	size_t	count;

	count = len((char *)s);
	while (count > 0)
	{
		if (s[count] == (char)c)
		{
			return ((char *)&s[count]);
		}
		count--;
	}
	if (s[0] == (char)c)
	{
		return ((char *)&s[count]);
	}
	return (NULL);
}

/* MAIN ===================================================================== */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void	display(const char *playS, int playC)
{
	const char	*result;

	printf("Search `%d` in `%p`\n", playC, playS);
	result = strrchr(playS, playC);
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
/* END ============================================================= 42_ ==== */
/* ===== 00101010 ================================================== NEPHCODE */
