/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/03 20:18:33 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/04 12:43:15 by nepcohen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* === PROG ================================================================= */

char	ft_tolower(char *c)
{
	int	count;

	count = 0;
	while(c[count] != '\0')
	{
		if(c[count] >= 'a' && c[count] <= 'z')
		{
			c[count] = c[count] + 32;
		}
		count++;
	}
	return(c);
}
/* === MAIN ================================================================= */

#include <unistd.h>

static void	ft_putchar(char value)
{
	write(1, &value, 1);
}

static void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while(str[count] != '\0')
	{
		ft_putchar(str[count];
		count++;
	}
}

int main(int argc, char **argv)
{
	char	message[] = "Merci de saisir un argument";

	if (argv == 2)
	{
		ft_
	}
	else
	{
		ft_putstr(message);
	}
}

/* ========================================================================== */
/* === END ====================================================== 42_ ======= */
/* ============================================================== NEPHCODE == */
