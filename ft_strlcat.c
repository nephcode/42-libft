/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strlcat.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/05 20:04:38 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/05 22:44:48 by nepcohen                   |#| NEPH_     */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length_s;
	size_t	length_d;
	size_t	i;

	i = 0;
	length_s = len(src);
	length_d = len(dst);
	if (size == 0)
		return (length_d);
	while (src[i] != '\0' && i < size -1)
	{
		dst[length_d + i] = src[i];
		i++;
	}
	dst[length_d + i] = '\0';
	return (length_d + length_s);
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

	result = ft_strlcat(playD, playS, playI);
	printf("Return: `%zu`\n", result);
	printf("Dest: `%s`\n", playD);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Merci de saisir les 3 arguments du main\n");
		return (1);
	}
	display(argv[1], argv[2], nephtoi(argv[3]));
	return (0);
}
/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
