##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## bsq
##

CC 	= 	gcc

SRC 	=		src/main.c\
				lib/my_putstr.c\
				lib/my_strcpy.c\
				lib/my_strlen.c


OBJ     = 		$(SRC:.c=.o)

NAME	=		mysh

CFLAGS 	=	-W -Wall -Wextra -pedantic


all:	$(NAME)

$(NAME): $(OBJ)
		gcc -g3 -o $(NAME) $(SRC)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all