/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_calloc.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/05 22:52:15 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/07 23:18:18 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
/* PROG ===================================================================== */
static void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	c = (unsigned char *)s;
	i  = 0:
	while(i < n)
	{
		c[i] = 0;
		count++;
	}
}

void *ft_calloc(size_t n, size_t size)
{
	void	*result;

	result = malloc(n * size);
	if (result  == null)
		return (NULL);
	ft_bzero(result, n * size);
	return (result);
	//return (&pointer)

}
/* MAIN ===================================================================== */
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("Merci de saisir les arguments du main `2`");
		return (1);
	else
	{
		// 
	}
}


/* ========================================================================== */
/* END ====================================================================== */
/* ========================================================================== */
