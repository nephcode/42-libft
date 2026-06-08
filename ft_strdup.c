/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strdup.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/16 20:55:29 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/08 21:39:33 by nepcohen                   |#| NEPH_     */
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
// ---------------------------------------------------------------------------//
static void	 *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	count = 0;
	while (count < n)
	{
		d[count] = s[count];
		count++;
	}
	return (dest);
}
// ---------------------------------------------------------------------------//
char *ft_strdup(const char *s)
{
	char *copy;

	copy = malloc(ft_strlen(s) + 1);
	if (copy == NULL)
		return (NULL);
	else
	{
		ft_memcpy(copy, s, ft_strlen(s) + 1);
		return (copy);
	}
}
/* MAIN ===================================================================== */
#include <stdio.h>

static void	display(const char *playS)
{
	char *playMain;

	playMain = ft_strdup(playS);
	printf("chain : `%s`\n", playMain);
	free(playMain);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Merci de saisir les arguments");
		return (1);
	}
	else
	{
		display(argv[1]);
		return (0);
	}
}
/* ========================================================================== */
/* END  ======================================================= 42_ ========= */
/* ============================================================ NEPHCODE ==== */
