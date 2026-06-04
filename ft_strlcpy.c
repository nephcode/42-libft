/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strlcpy.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/04 17:42:59 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/04 22:40:54 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
/* PROG ===================================================================== */
static size_t	len(const char *value)
{
	const char	*length;

	length = value;
	while (*value)
		value++;
	return (value - length);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	i;

	i = 0;
	length = len(src);
	if (size == 0)
		return (length);
	else
	{
		while (src[i] != '\0' && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (length);
	}
}
/* MAIN ===================================================================== */
#include <stdio.h>

static int	nephtoi(char *num)
{
	int	i;
	int	result;
	int	symbol;

	i = 0;
	result = 0;
	symbol = 1;
	while (num[i] == 32 || (num[i] >= 9 && num[i] <= 13))
		i++;
	if (num[i] == '-' || num[i] == '+')
	{
		if (num[i] == '-')
			symbol = -1;
		i++;
	}
	while (num[i] >= '0' && num[i] <= '9')
	{
		result = result * 10 + (num[i] - '0');
		i++;
	}
	return (symbol * result);
}

static void	display(char *playD, const char *playS, size_t playI)
{
	size_t	result;

	result = ft_strlcpy(playD, playS, playI);
	printf("Return: `%zu`\n", result);
	printf("Dest: `%s`\n", playD);
}

int	main(int argc, char **argv)
{
	if (argc != 4 )
	{
		printf("Merci de saisir les 3 arguments du main");
		return (1);
	}
	display(argv[1], argv[2], nephtoi(argv[3]));
	return (0);
}
/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
