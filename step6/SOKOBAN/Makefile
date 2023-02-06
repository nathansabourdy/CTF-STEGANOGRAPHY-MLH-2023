##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC        =			./lib/my/my_intlen.c	\
				./lib/my/my_isneg.c	\
				./lib/my/my_printf.c	\
				./lib/my/my_printfcsd.c	\
				./lib/my/my_putchar.c	\
				./lib/my/my_put_nbr.c	\
				./lib/my/my_putstr.c	\
				./lib/my/my_revstr.c	\
				./lib/my/my_strcapitalize.c	\
				./lib/my/my_concat_string.c	\
				./lib/my/my_strcmp.c	\
				./lib/my/my_strcpy.c	\
				./lib/my/my_strlen.c	\
				./lib/my/my_strupcase.c	\
				./lib/my/my_swap.c	\
				./lib/my/print_arg.c	\
				./lib/my/my_str_word_2array.c	\
				./lib/my/my_home.c	\
				./sources/my_error_handling.c	\
				./sources/my_count_o.c	\
				./sources/my_move_up.c	\
				./sources/my_move_right.c	\
				./sources/my_move_down.c	\
				./sources/my_move_left.c	\
				./sources/all_process_print_win.c	\
				./sources/my_every_map.c	\
				my_sokoban.c	\

CPPFLAGS	= -Iinclude -lncurses

LIB	=	-L./ -lmy

NAME	=	step6_part1_mac

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	gcc my_sokoban.c -o $(NAME) $(CPPFLAGS) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f libmy.a
	rm -f ./lib/my/libmy.a
	rm -f ./lib/my/*.c~
	rm -f *.c~

re:	clean	fclean all
