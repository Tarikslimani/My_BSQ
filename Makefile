##
## EPITECH PROJECT, 2017
## dez
## File description:
## dez
##

SRC     =	bsq.c		\
		str_to_tab.c	\
		check.c		\
		bsqsuit.c	\
		fonction.c

OBJ     =       $(SRC:.c=.o)

NAME    =       bsq

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	find . -name "#*#" -delete -or -name "*~" -delete

fclean:	clean
	rm -f $(NAME)
	find . -name "#*#" -delete -or -name "*~" -delete

re :	fclean all
