/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strlen.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/04/29 17:24:37 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/12 19:16:06 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */

/*=== PROG ===================================================================*/
size_t	ft_strlen(char *s)
{
	size_t	count;
	
	count = 0;
	while(s[count])
	{
		count++;
	}
	return (count);
}
/*=== MAIN ===================================================================*/

#include <unistd.h>
#include <stdio.h>

static void ft_putchar(char letter)
{
	write(1, &letter, 1);
}

static void mininbr(int nbr)
{
	if (nbr > 10)
		mininbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

static void display(char *charPlay)
{
	int	intPlay;

	intPlay = ft_strlen(charPlay);
	printf("Lenght = `%d`\n", intPlay);
	//mininbr(ft_strlen(charPlay));
}

int	main(int argc, char **argv)
{
	char message[] = "Merci de saisir un argument";
	
	if (argc == 2)
	{
		display(argv[1]);
	}
	else
	{
		printf("%s", message);
	}
	return(0);
}
