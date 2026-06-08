/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strdup.c                                              /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/16 20:55:29 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/08 19:01:57 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
/* PROG ===================================================================== */
static size_t	ft_strlen(const char *value)
{
	const char	*length;

	length = value;
	while (*value)
		value++;
	return (value - length);
}

static *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	count = 0
	while (count < n)
	{
		d[count] = s[count];
		count++;
	}
	return (dest);
}

// malloc et free 
char *ft_strdup(const char *s)
{
	copy 	// take = strlen define the char size
	// keep = malloc (take *sizeof(char))
	// memcpy (keep 
	// return
}

/* MAIN ===================================================================== */
static void	display()
{
	//
}

int	main(int argc, char **argv)
{
	//
}
/* ========================================================================== */
/* END  ======================================================= 42_ ========= */
/* ============================================================ NEPHCODE ==== */
