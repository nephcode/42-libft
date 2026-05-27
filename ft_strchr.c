/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strchr.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/13 13:47:45 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/27 17:03:07 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */

/* PROG ===================================================================== */
char	*strchr(const char *s, int c)
{
	int		count;
	char	result;

	count = 0;
	if (!(s[count] == c && c == '\0'))
	{
		while (s[count] != c)
		{
			if (s[count] == c)
				&s = c;
			count++;
		}
		return (s);
	}
}
/* MAIN ===================================================================== */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void	display(const char *playS, int play)
{
	
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Merci de saisir les deux Arguments");
	}
	else 
	{
		display(argv[1], atoi(argv[2]));
	}
	return (0);
}

/* ========================================================================== */
/* END ========================================================= 42_ ======== */
/* ============================================================= NEPHCODE === */
