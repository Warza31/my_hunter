##
## EPITECH PROJECT, 2017
## make
## File description:
## make
##

SRC	=	./lib/fct1.c		\
		./lib/fct2.c		\
		./lib/fct3.c		\
		./lib/my_printf.c	\
		./src/analyse_events.c	\
		./src/display.c		\
		./src/helper.c		\
		./src/ini_struct.c	\
		./src/main.c		\
		./src/my_hunter.c	\
		./src/position.c	\
		./src/rect.c		\
		./src/score.c


OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

FLAGS	=	-W -Wall -Wextra -pedantic

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o 	$(NAME) $(OBJ) -l c_graph_prog $(FLAGS)
clean:
	rm -f	$(OBJ)

fclean:	clean
	rm -f 	$(NAME)

re:	fclean all
