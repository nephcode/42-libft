/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_substr.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/08 21:45:11 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/11 21:19:16 by nepcohen                   |#| NEPH_     */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	length_on;
	size_t	length_copy;

	length_on = ft_strlen(s);
	if (start >= length_on)
		length_copy = 0;
	else if (len > length_on - start)
		length_copy = length_on - start;
	else
		length_copy = len;
	copy = malloc(length_copy + 1);
	if (copy == NULL)
		return (NULL);
	else
	{
		ft_memcpy(copy, s + start, length_copy);
		copy[length_copy] = '\0';
		return (copy);
	}
}
/* MAIN ===================================================================== */
#include <stdio.h>

static int	minitoi(unsigned char *toi)
{
	int	result;

	result = 0;
	while (*toi >= '0' && *toi <= '9')
	{
		result = result * 10 + (*toi - '0');
		toi++;
	}
	return (result);
}

static void	display(char const *playS, unsigned int playOn, size_t playL)
{
	char	*playMain;

	printf("Size : `%zu`\n Sub : `%u`\n", playL, playOn);
	playMain = ft_substr(playS, playOn, playL);
	printf("Chain : `%s`\n", playMain);
	free(playMain);
}

int	main(int argc, char **argv)
{
	unsigned int	arg2;
	size_t			arg3;

	if (argc != 4)
	{
		printf("Merci de saisir les arguments du Main");
		return (1);
	}
	arg2 = (unsigned int)minitoi((unsigned char*)argv[2]);
	arg3 = (size_t)minitoi((unsigned char*)argv[3]);
	display(argv[1], arg2, arg3);
	return (0);
}

/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
