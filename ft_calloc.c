/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_calloc.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/05 22:52:15 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/08 15:54:33 by nepcohen                   |#| NEPH_     */
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
	i = 0;
	while(i < n)
	{
		c[i] = 0;
		i++;
	}
}

void *ft_calloc(size_t n, size_t size)
{
	void	*result;

	result = malloc(n * size);
	if (result  == NULL)
		return (NULL);
	ft_bzero(result, n * size);
	return (result);
}
/* MAIN ===================================================================== */
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		*take;
	size_t	count;


	take = ft_calloc(atoi(argv[1]), sizeof(int));
	if (argc != 2)
	{
		printf("Merci de saisir les arguments du main `1`");
		return (1);
	}
	else if (take == NULL)
		return (1);
	else
	{
		count = 0;
		while (count < (size_t)atoi(argv[1]))
		{
			printf("return :`%d`\n", take[count]);
			count++;
		}
		free(take);
	}
	return (0);
}


/* ========================================================================== */
/* END ====================================================================== */
/* ========================================================================== */
