/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strncmp.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/29 17:57:34 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/29 20:00:18 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
/* PROG ===================================================================== */
int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				count;
	//	unsigned const char	*r1;
	//unsigned const char	*r2;
	
	count = 0;
	if (n != 0)
	{
		while((const char)s1[count] != '\0')
		{
			if ((const char)s1[count] != (const char)s2[count])
				return ((const char)s1[count] - (const char)s2[count]);
		}
		count++;
	}
	else
		return (0);
}

/* MAIN ===================================================================== */
#include <stdio.h>
#include <stdlib.h>

void	display(const char playS1, const char *playS2, size_t playN)
{
	int	result;
	
	printf("");
	printf();
	printf();
	result = strncmp(playS1, playS2, playN);
	printf("Le result est `%d`\n", result);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		printf("Merci de saisir les 3 Arguments");
	else
	{
		display(argv[1], argv[2], atoi(argv[3][0]);
	}
	return (0);
}


/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
