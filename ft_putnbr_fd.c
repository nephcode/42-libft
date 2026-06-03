/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_putnbr_fd.c                                           /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/03 15:13:23 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/03 16:39:47 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* PROG ===================================================================== */
static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < -2147483647)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}
/* MAIN ===================================================================== */
#include <stdio.h>

static int	ft_atoi(const char *nptr)
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

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("merci de saisir les arguments du main");
	else
	{
		ft_putnbr_fd(ft_atoi(argv[1]), ft_atoi(argv[2]));
		ft_putchar_fd('\n', 1);
	}
	return (0);
}
/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
