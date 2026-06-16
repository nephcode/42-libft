/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_itoa.c                                                /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/12 21:24:45 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/16 03:54:13 by nephco                     |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static size_t	digitcount(int num)
{
	size_t	length;
	long	nb;

	nb = num;
	length = 0;
	if (nb <= 0)
		length++;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}
/* PROG ===================================================================== */

char	*ft_itoa(int n)
{
	char	*chain;
	int		length;
	long	number;

	number = n;
	length = digitcount(number);
	chain = (char *)malloc(sizeof(char) * (length + 1));
	if (!chain)
		return (NULL);
	chain[length] = '\0';
	if (number < 0)
	{
		chain[0] = '-';
		number = -number;
	}
	else if (number == 0)
		chain[0] = '0';
	while (number > 0)
	{
		chain[length - 1] = (number % 10) + '0';
		length --;
		number = number / 10;
	}
	return (chain);
}

/* MAIN ===================================================================== */
#include <stdio.h>

static int	nephtoi(const char *nptr)
{
	int	count;
	int	result;
	int	symbol;

	count = 0;
	result = 0;
	symbol = 1;
	while (nptr[count] == 32 || (nptr[count] >= 9 && nptr[count] <= 13))
		count++;
	if (nptr[count] == '-' || nptr[count] == '+')
	{
		if (nptr[count] == '-')
		{
			symbol = -1;
			count++;
		}
	}
	while (nptr[count] >= '0' && nptr[count] <= '9')
	{
		result = result * 10 + (nptr[count] - '0');
		count++;
	}
	return (symbol * result);
}
// -------------------------------------------------------------------------- //
static void	display(int play)
{
	char	*result;

	result = ft_itoa(play);
	printf("Result CHAR : `%s`\n", result);
	free(result);
}

// -------------------------------------------------------------------------- //
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Merci de saisir les arguments du main");
		return (1);
	}
	display(nephtoi(argv[1]));
	return (0);
}
/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
