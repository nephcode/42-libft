/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strnstr.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/31 18:37:23 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/01 23:58:48 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
/* PROG  ==================================================================== */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	slot;

	count = 0;
	if (*little == '\0')
		return ((char *)big);
	if (!len)
		return (NULL);
	else
	{
		while (big[count] != '\0' && count < len)
		{
			slot = 0;
			while (big[count + slot] == little[slot]
				&& little[slot] != '\0'
				&& count + slot < len)
				slot++;
			if (little[slot] == '\0')
				return ((char *)&big[count]);
			count++;
		}
		return (NULL);
	}
}
/* MAIN ===================================================================== */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void	display(const char *playB, const char *playL, size_t playN)
{
	const char	*result;

	printf("Big : `%s`\n", playB);
	printf("Little : `%s`\n", playL);
	printf("Taille : `%zu`\n", playN);
	result = ft_strnstr(playB, playL, playN);
	if (result == NULL)
		printf("NULL\n");
	else if (result == playB)
		printf("Little vide : `%s`\n", result);
	else
	{
		printf("Chaine : `%s`\n", result);
		printf("Pointer : `%p`\n", (void *)result);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		printf("Merci de saisir les 3 arguments du main");
	else
	{
		display(argv[1], argv[2], atoi(argv[3]));
	}
	return (0);
}

/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
