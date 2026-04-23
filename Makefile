# **************************************************************************** #
#                                                                              #
#                                                              /#/  |#/|#|     #
#    Makefile                                                 /#/   |/ |#|     #
#                                                            /#/      /#/      #
#    By: nephco <nephco@student.42.fr>                      /#/      /#/       #
#                                                          /#/____  |#| /|     #
#    Created: 2026/04/23 19:03:40 by nephco               |#######| |#|/#|     #
#    Updated: 2026/04/23 19:24:03 by nephco                     |#| .FR        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_isanum.c \
		ft_isalpha.c 

OBJECTS = $(SRC:%.c=%.o)
HEADER = libft.h
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(name) $(OBJECTS)

%.o : %.c
	$(cc) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)


re
