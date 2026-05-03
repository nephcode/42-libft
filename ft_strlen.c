/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/04/29 17:24:37 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/03 20:06:08 by nepcohen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*=== PROG ===================================================================*/
int	ft_strlen(char *str)
{
	int count;
	
	count = 0;
	while(str[count] != '\0')
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
