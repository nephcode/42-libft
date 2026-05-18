/* ************************************************************************** */
/*                                                                            */
/*                                                             /#/  |#/|#|    */
/*   libft.h                                                  /#/   |/ |#|    */
/*                                                           /#/      /#/     */
/*   By: nepcohen <nepcohen@learner.42.tech>                /#/      /#/      */
/*                                                         /#/____  |#| /|    */
/*   Created: 2026/05/01 21:50:31 by nepcohen             |#######| |#|/#|    */
/*   Updated: 2026/05/19 00:25:56 by nepcohen                   |#| NEPH_     */
/*                                                                            */
/* ************************************************************************** */

#ifndef libtf.c
#define

typedef struct	s_list
{
	void	*content;
	struct _slist	*next;
}				t_list;

#include <strings.h>
#include <stdio.h>
#include <unistd.h>
/* PROTOTYPES =============================================================== */

// PART 1 // CLASSIC LIBC

int		ft_isalpha(int c)
int		ft_isdigit(int c)
int		ft_isalnum(int c)
int		ft_isdigit(int c)
int		ft_isdigit(int c)
int		ft_strlen(char *str)
void	*ft_memset(void s, int c, size_t n);
void	*ft_bzero(void *s, size_t n)
void	ft_memcpy(void dest[], const void src[], size_t n);
void	*ft_memmove(void dest[], const void src[.n], size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	ft_strchr(const char *s, int c);
char	ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char s2, size_t n);
void	*ft_memchr(const void s, int c, size_t n);
void	ft_memcmp( const void s1, const void s2, size_t n);
char	*ft)strnstr(const char *big, const char *little, size_t len);
int		ft)atoi(const char *nptr);
void	ft_calloc(size_t n, size_t size); //malloc
void	ft_strdup(const char *s); //malloc


// PART 2 // BONUS LIBFT
char	*ft_substr(char const *s, unsigned int start, size_t len);//malloc
char	*ft_strjoin(char const *s1, char const *s2);//malloc
char	*ft_strtrim(char const *s1, char const *set);//malloc
char	**ft_split(char const *s, char c);//malloc,free
char	*ft_itoa(int n);//malloc
char	*ft_strmapi(char const *s, char (f*)(unsigned int, char));//malloc
void	ft_sriteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchard_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd); // begin with this 

// PART 3 // CHAIN
t_list	**ft_lstnew(void *content); //malloc
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *)); //free
void	ft_ftlstclear(l_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_List *lst, void *(*f)(void *), void (*del)(void*));

/* ========================================================================== */
#endef
