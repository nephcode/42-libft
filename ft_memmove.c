/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_memmove.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/21 17:53:17 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/26 20:36:09 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */
include <stddef.h>
/* PROG ===================================================================== */

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*d;
	unsigned const char *s;

	d = (unsigned char*)dest;
	s = (unsigned const char*)src;
	count = 0;
	if (dest < src)
	{
		while(count < n)
		{
			dest[count] = src[count];
			count++;
		}
	else if (dest > src)
	{
		while(count < n)
			dest[count] = src[count];
			count--;
	}
	return(dest));
}
/* MAIN ===================================================================== */

#include <stdio.h>
#include <stdlib.h>

void display(void *playD, const void *playS, size_t playN)
{
        unsigned char *result;

        printf("Avant : `%s`\n Src `%s`\n", (char *)playD, (char *)playS);
        printf("Ram : `%p`, Replace : `%zu`\n", playD, playN);
        result = ft_memmove(playD, playS, playN);
        printf("==========================\n");
        printf("Apres : `%s`\n Src : `%s`\n", (char *)result, (char *)playS);
        printf("Ram : `%p`, Replace : `%zu`\n", result, playN);
}

int     main(int argc, char **argv)
{
        if (argc != 4)
                printf("Merci de saisir les trois arguments");
        else
        {
                display(argv[1], argv[2], atoi(argv[3]));
        }
}
/* ========================================================================== */
/* END ================================================== 42_ =============== */
/* ====================================================== NEPHCODE ========== */
