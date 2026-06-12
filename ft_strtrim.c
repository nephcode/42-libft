/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strtrim.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nephco <nephco@student.42.fr>                      /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/12 02:03:17 by nephco               |#######| |#|/#|    */
/*   Updated: 2026/06/12 21:21:20 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/* PROG ===================================================================== */
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_strchr(const char *s, int c);
// -------------------------------------------------------------------------- //

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	head;
	size_t	tail;

	if (!s1 || !set)
		return (NULL);
	head = 0;
	tail = ft_strlen(s1);
	while (s1[head] && ft_strchr(set, s1[head]))
		head++;
	while (tail > head && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_subtr(s1, head, tail - head));
}
/* MAIN ===================================================================== */
#include <stdio.h>

static void	display(char const *play1, char const *play2)
{
	char	*playMain;

	printf("Chain : `%s`\n, Trim : `%s`\n", play1, play2);
	playMain = ft_strtrim(play1, play2);
	printf("Exit : `%s`\n", playMain);
	free(playMain);
}

// ---------------------------------------------------------------------------//

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Merci de saisir les 2 arguments\n");
		return (1);
	}
	display(argv[1], argv[2]);
	return (0);
}

/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
