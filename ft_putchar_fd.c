/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_putchar_fd.c                                          /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/02 22:49:35 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/03 02:15:26 by nephco                     |#|  NEPH     */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* PROG ===================================================================== */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* MAIN ===================================================================== */
#include <stdio.h>

static int	nephtoi(const char *value)
{
	int	count;
	int	result;
	int	symbol;

	count = 0;
	result = 0;
	symbol = 1;
	while (value[count] == 32 || (value[count] <= 9 && value[count] <= 13))
		count++;
	if (value[count] == '-' || value[count] == '+')
	{
		if (value[count] == '-')
			symbol = -1;
		count++;
	}
	while (value[count] >= '0' && value[count] <= '9')
	{
		result = result * 10 + (value[count] - '0');
		count++;
	}
	return (symbol * result);
}

static void	display(char play, int num)
{
	ft_putchar_fd(play, num);
	ft_putchar_fd('\n', 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("Merci de saisir les argument du Main `2`\n");
	else
	{
		//printf("Char :`%d` __ Description :`%d`\n", nephtoi(argv[1]), nephtoi(argv[2]));
		display(argv[1][0], nephtoi(argv[2]));
	}
	return (0);
}
/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
