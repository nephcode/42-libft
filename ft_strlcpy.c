/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strlcpy.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/04 17:42:59 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/04 21:15:58 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
/* PROG ===================================================================== */
static size_t len(char *value)
{
	char	*lenght;

	lenght = value;
	while(*value)
		value++;
	return(value - lenght);
}

void	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t count;
	size_t i;
	
	i = 0;
	count = len(src);
	if (size == 0)
		return (count);
	else
	{
		while(src[i] != '\0')
		{
			dst[i] = s
			i++;
			if (i == count)
			{
				dst[1] = '\0';
			}
		}
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

static void display(char *playD, const char playS, size_t playI)
{

}

int	main (int argc, char ** argv)
{
	if (argc != 4)
		printf("Merci de saisir les 3 arguments du main");
	else
	{

	}

	return (0);
}
/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
