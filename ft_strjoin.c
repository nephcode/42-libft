/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strjoin.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/11 21:25:59 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/11 22:58:54 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

/* PROG ===================================================================== */

static size_t	ft_strlen(const char *value)
{
	const char	*length;

	length = value;
	while (*value)
		value++;
	return (value - length);
}

// -------------------------------------------------------------------------- //

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	count = 0;
	while (count < n)
	{
		d[count] = s[count];
		count++;
	}
	return (dest);
}

// -------------------------------------------------------------------------- //

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	chain_one;
	size_t	chain_two;
	size_t	lengthcopy;
	char	*ramcopy;

	chain_one = ft_strlen(s1);
	chain_two = ft_strlen(s2);
	lengthcopy = (chain_one + chain_two + 1);
	ramcopy = malloc(lengthcopy);
	if (ramcopy == NULL)
		return (NULL);
	ft_memcpy(ramcopy, s1, chain_one);
	ft_memcpy(ramcopy + chain_one, s2, chain_two);
	ramcopy[chain_one + chain_two] = '\0';
	return (ramcopy);
}
/* MAIN ===================================================================== */
#include <stdio.h>

static void	display(const char *play1, const char *play2)
{
	char	*playMain;

	printf("Chaine 1 : `%s`\n Chaine 2 : `%s`\n", play1, play2);
	playMain = ft_strjoin(play1, play2);
	printf("Join : `%s`\n", playMain);
	free(playMain);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Merci de saisir les arguments du Main");
		return (1);
	}
	display(argv[1], argv[2]);
	return (0);
}
/* ========================================================================== */
/* END ============================================================== 42_ === */
/* ================================================================= NEPHCODE */
