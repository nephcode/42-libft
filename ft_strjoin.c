/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   ft_strjoin.c                                             /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/06/11 21:25:59 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/06/11 22:06:40 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
/* PROG ===================================================================== */
static size_t   ft_strlen(const char *value)
{
        const char      *length;

        length = value;
        while (*value)
                value++;
        return (value - length);
}
// -------------------------------------------------------------------------- //

static void     *ft_memcpy(void *dest, const void *src, size_t n)
{
        size_t                          count;
        unsigned char           *d;
        unsigned const char     *s;

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
char *ft_strjoin( char const *s1, char const *s2);
{
	// ft_strlen = s1
	// ft_strlen = s2
	// ramcopy  = lengthS1 + lengthS2 + 1;
	// if s1 && s2 NULL ? n
	//malloc (
	return (
}
/* MAIN ===================================================================== */
#include <stdio.h>

static void     display(char const *play1, unsigned int play2)
{
        char    *playMain;

        printf("Chaine 1 : `%s`\n Chaine 2 : `%s`\n", play1, play2);
        playMain = ft_substr(play1, play2);
        printf("Join : `%s`\n", playMain);
        free(playMain);
}

int     main(int argc, char **argv)
{
        if (argc != 3)
        {
                printf("Merci de saisir les arguments du Main");
                return (1);
        }
        display(argv[1], argv[2]);
        return (0);
}
/* ========================================================================== */
/* END ============================================================== 42_ === */
/* ================================================================= NEPHCODE */
