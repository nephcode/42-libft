/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_substr.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/08 21:45:11 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/11 20:03:48 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
/* PROG ===================================================================== */
static size_t	ft_strlen(const char *value)
{
	const char	*length;

	length  = value;
	while(*value)
		value++;
	return (value - length);
}
// -------------------------------------------------------------------------- //
static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*d;
	unsigned const char	*s;
	
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	count = 0;
	while (count < n)
	{
		d[count] = s[count];
		count++;
	}
	return (dest);
}
// -------------------------------------------------------------------------- //
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	
	copy = malloc(len +1);
	if (copy == NULL)
		return (NULL);
	// add  conditions
	else
	{
		ft_memcpy(copy, s + start, len + 1);
		return (copy);
	}
}
/* MAIN ===================================================================== */
static int minitoi(unsigned char *toi)
{
	int  *result;

	result = 0;
	while(*toi >= '0' && *toi <= '9')
	{
		result = result * 10 +(*toi - '0');
		toi++;
	}
	return (toi - (result);
}

static void display(char const *playS, unsigned int PlayOn, size_t playL)
{
	
}

int	main(int argc, char **argv)
{
	// CODE
}


/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
