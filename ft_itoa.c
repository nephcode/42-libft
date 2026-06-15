/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_itoa.c                                                /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/12 21:24:45 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/15 02:17:43 by nephco                     |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */

/* PROG ===================================================================== */
char	*ft_itoa(int n)
{
	//while space
	
	//if symbol
	
	//while number  
	// putmbn
	// return ft_subtr
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


static void	display()
{
 // code here
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
}


/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
