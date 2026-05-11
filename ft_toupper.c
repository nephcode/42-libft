/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_toupper.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/11 20:05:27 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/11 22:49:04 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */

/* === PROG ================================================================= */

int	ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
/* === MAIN ================================================================= */

#include <unistd.h>
#include <stdio.h>

static void	ft_putchar(char value)
{
	write(1, &value, 1);
}

static void ft_putstr(char *str)
{
	int	count;
	
	count = 0;
	while(str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

static void	display(char *play)
{
	int count;

	count = 0;
	while(play[count] != '\0')
	{
		ft_putchar(ft_toupper(play[count]));
		count++;
	}
}

int main(int argc, char **argv)
{
	char	message[] = "Merci de saisir un argument";

	if (argv == 2)
	{
		display(argc[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr(message);
		ft_putchar('\n');
	}
	return(0);
}

/* ========================================================================== */
/* === END ====================================================== 42_ ======= */
/* ============================================================== NEPHCODE == */
