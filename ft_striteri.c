/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_striteri.c                                            /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/13 20:33:21 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/13 22:07:49 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */

/* PROG ===================================================================== */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;

	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* MAIN ===================================================================== */
#include <stdio.h>

void up(unsigned int index, char *chain)
{
	(void)index;
	if ( *chain >= 'a' && *chain <= 'z')
	{
		*chain -= 32;
	}
}

void	display(char *play)
{
	printf("Init : `%s`\n", play);
	ft_striteri(play, up);
	printf("Result : `%s`\n", play);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Merci de saisir les arguments du main");
		return (1);
	}
	display(argv[1]);
	return (0);
}

/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
