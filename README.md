_This activity has been created as part of the 42 curriculum by nepcohen_

<!-- HEADER -->

![Header](https://etftsnavdbngasuikjid.supabase.co/storage/v1/object/public/42core/readmeHeaderLibft.png)

# LIBFT C

Long story Short, simple resume of libFT. That'a my first in C. first graft on 42 Common Core.

## DESCRIPTION

### Functions

| Step | Function        | Category    | External Functions | Dependencies                | Difficulty | Main Concept                   |
| ---- | --------------- | ----------- | ------------------ | --------------------------- | ---------- | ------------------------------ |
| 1    | ft_isalpha      | Libc        | None               | None                        | Easy       | Character classification       |
| 2    | ft_isdigit      | Libc        | None               | None                        | Easy       | Character classification       |
| 3    | ft_isalnum      | Libc        | None               | None                        | Easy       | Character classification       |
| 4    | ft_isascii      | Libc        | None               | None                        | Easy       | ASCII validation               |
| 5    | ft_isprint      | Libc        | None               | None                        | Easy       | Printable characters           |
| 6    | ft_toupper      | Libc        | None               | None                        | Easy       | ASCII conversion               |
| 7    | ft_tolower      | Libc        | None               | None                        | Easy       | ASCII conversion               |
| 8    | ft_strlen       | String      | None               | None                        | Easy       | String traversal               |
| 9    | ft_memset       | Memory      | None               | None                        | Easy       | Memory initialization          |
| 10   | ft_bzero        | Memory      | None               | ft_memset                   | Easy       | Memory clearing                |
| 11   | ft_memcpy       | Memory      | None               | None                        | Medium     | Memory copy                    |
| 12   | ft_memmove      | Memory      | None               | None                        | Medium     | Overlapping memory copy        |
| 13   | ft_memchr       | Memory      | None               | None                        | Medium     | Memory search                  |
| 14   | ft_memcmp       | Memory      | None               | None                        | Medium     | Memory comparison              |
| 15   | ft_strchr       | String      | None               | None                        | Easy       | String search                  |
| 16   | ft_strrchr      | String      | None               | None                        | Easy       | Reverse string search          |
| 17   | ft_strncmp      | String      | None               | None                        | Easy       | String comparison              |
| 18   | ft_strlcpy      | String      | None               | ft_strlen                   | Medium     | String copy                    |
| 19   | ft_strlcat      | String      | None               | ft_strlen                   | Medium     | String concatenation           |
| 20   | ft_strnstr      | String      | None               | ft_strlen                   | Hard       | Substring search               |
| 21   | ft_atoi         | Conversion  | None               | None                        | Medium     | String to integer              |
| 22   | ft_calloc       | Memory      | malloc             | ft_bzero                    | Medium     | Dynamic allocation             |
| 23   | ft_strdup       | String      | malloc             | ft_strlen, ft_memcpy        | Medium     | String duplication             |
| 24   | ft_putchar_fd   | Output      | write              | None                        | Easy       | File descriptor output         |
| 25   | ft_putstr_fd    | Output      | write              | ft_strlen                   | Easy       | File descriptor output         |
| 26   | ft_putendl_fd   | Output      | write              | ft_putstr_fd, ft_putchar_fd | Easy       | File descriptor output         |
| 27   | ft_putnbr_fd    | Output      | write              | ft_putchar_fd               | Medium     | Recursive integer output       |
| 28   | ft_substr       | String      | malloc             | ft_strlen                   | Medium     | Substring extraction           |
| 29   | ft_strjoin      | String      | malloc             | ft_strlen, ft_memcpy        | Medium     | String concatenation           |
| 30   | ft_strtrim      | String      | malloc             | ft_strlen, ft_substr        | Medium     | String trimming                |
| 31   | ft_itoa         | Conversion  | malloc             | ft_strdup (INT_MIN case)    | Hard       | Integer to string              |
| 32   | ft_strmapi      | String      | malloc             | ft_strlen                   | Medium     | Functional string mapping      |
| 33   | ft_striteri     | String      | None               | None                        | Easy       | In-place string iteration      |
| 34   | ft_split        | String      | malloc, free       | ft_substr                   | Very Hard  | String tokenization            |
| 35   | ft_lstnew       | Linked List | malloc             | None                        | Easy       | List node creation             |
| 36   | ft_lstadd_front | Linked List | None               | None                        | Easy       | List insertion                 |
| 37   | ft_lstsize      | Linked List | None               | None                        | Easy       | List traversal                 |
| 38   | ft_lstlast      | Linked List | None               | None                        | Easy       | List traversal                 |
| 39   | ft_lstadd_back  | Linked List | None               | ft_lstlast                  | Medium     | List insertion                 |
| 40   | ft_lstdelone    | Linked List | free               | None                        | Easy       | Memory management              |
| 41   | ft_lstclear     | Linked List | free               | ft_lstdelone                | Medium     | Recursive cleanup              |
| 42   | ft_lstiter      | Linked List | None               | None                        | Easy       | List iteration                 |
| 43   | ft_lstmap       | Linked List | malloc, free       | ft_lstnew, ft_lstclear      | Very Hard  | Functional list transformation |

## INSTRUCTIONS

Test norminette > OK 💚 or 💔 KO
```bash
norminette ./ 
```

Import main test from nephcode repository. Download Libft test & main from :
```http
https://github.com/nephcode/42unitest.git
```

Please use the flags like `cc -flag functionName -o programName`
```bash
cc -Wall -Wextra -Werror
```

Functions have a specific test Main in comment. if you want to test the function with argv parameter it is ok 

```bash
./functionName [paramater]
```

Check the memory (exemple calloc)
```bash 
 valgrind --leak-check=full ./calloc_test 5
```


Makefile
```bash
make
```
## RESSOURCES

The best ressources are mine and the others are beautiful. Below, the complete stack to build my libft.

Follow my work **[BuilInPublic](https://github.com/users/nephcode/projects/8)**

| Type       | Source                                                              | Why                                         |
| :--------- | :------------------------------------------------------------------ | :------------------------------------------ |
| 42 Jacuzzi | [git@nephcode/42jacuzzi](https://github.com/nephcode/42jacuzzi.git) | Some tricks for 42 student                  |
| 42 Unitest | [git@nephcode/42unitest](https://github.com/nephcode/42jacuzzi.git) | Test with my main.c                         |
| Tripouille | [git@tripouille](https://github.com/Tripouille)                     | Test for Libft                              |
| Funcheck   | [git@froz/funcheck](https://github.com/froz42/funcheck)             | checking functions calls return protections |
| Valgrind   | [valgrind.org](valgrind.org)                                        | Analysis leaks C functions                  |

<!-- FOOTER -->

![Footer](https://etftsnavdbngasuikjid.supabase.co/storage/v1/object/public/42core/readmeFooterLibft.png)
