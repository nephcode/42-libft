/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strrchr.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/27 21:14:50 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/28 21:12:41 by nephco                     |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */

/* PROG ===================================================================== */
static int	len(char *chain)
{
	int	count;

	count = 0;
	while(chain[count] != '\0')
	{
		count++;
	}
	return (count);
}
// ----------------------------------------------------------------------------
char	*strrchr(const char *s, int c)
{
	int	count;
	int	final; 

	final = len((char *)s);
	while (final[count] > 0)
	{
		if ((char)s[count] != '\0')
		{
			return ((char *)&s[count]);
		}
		count--;
	}
	if ((char)s[count] == '\0')
	{
		return (NULL);
	}
}
/* MAIN ===================================================================== */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void    display(const char *playS, int playC)
{
	const char  *result;

	printf("Search `%d` in `%p`\n", playC, playS);
	result = strrchr(playS, playC);
	printf("Memory location is `%p`\n", result);
}

int main(int argc, char **argv)
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
/* ================================================================= NEPHCODE */
