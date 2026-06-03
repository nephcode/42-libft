/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_putstr_fd.c                                           /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/03 17:26:38 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/03 18:52:18 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* PROG ===================================================================== */
void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		ft_putchar_fd(s[count], fd);
		count++;
	}
}
/* MAIN ===================================================================== */
#include <stdio.h>

static int	nephtoi(const char *value)
{
	int	count;
	int	symbol;
	int	result;

	count = 0;
	result = 0;
	symbol = 1;
	while (value[count] == 32 || (value[count] >= 9 && value[count] <= 13))
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

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("Merci de saisir les arguments du main");
	else
	{
		ft_putstr_fd(argv[1], nephtoi(argv[2]));
		ft_putchar_fd('\n', 1);
	}
	return (0);
}

/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
