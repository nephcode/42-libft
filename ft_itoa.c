/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_itoa.c                                                /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/12 21:24:45 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/15 23:12:37 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static size_t digitcount(int num)
{
	size_t	length;
	long	nb;

	nb = num;
	length = 0;
	if (nb <= 0)
		length+;
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
	int		symbol;
	

	chain = malloc(digitcount(n)
	if(!n)
		return (0);
	if (n < 0 )
	{
		
	}


	
	
	//if symbol
	
	//while number  
	// putmbn
	// return ft_subtr
	//
	//
	//

}
/* MAIN ===================================================================== */
static int	nephtoi(const char *nptr)
{
        int     count;
        int     result;
        int     symbol;

        count = 0;
        result = 0;
        symbol = 1;
        while (nptr[count] == 32 || (nptr[count] >= 9 && nptr[count] <= 13))
                count++;
        if (nptr[count] == '-' || nptr[count] == '+')
        {
                if (nptr[count] == '-')
                        symbol = -1;
                count++;
        }
        while (nptr[count] >= '0' && nptr[count] <= '9')
        {
                result = result * 10 + (nptr[count] - '0');
                count++;
        }
        return (symbol * result);
}


static void	display(int *play)
{
	
	ft_itoa(play);
	printf("Result CHAR : `%s`\n", play);

}

// -------------------------------------------------------------------------- //
int	main(int argc, **argv)
{
	if (argc != 2)
	{
		printf("Merci de saisir les arguments du main");
		return (1)
	}
	display(nephtoi(argv[1]));
	return (0);
}


/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
