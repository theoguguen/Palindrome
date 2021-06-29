##
## EPITECH PROJECT, 2021
## CPool
## File description:
## Makefile
##

SRC	=	my_putchar.c 			\
		my_isneg.c 				\
		my_putnbr.c				\
		my_swap.c				\
		my_strlen.c				\
		my_putstr.c				\
		my_getnbr.c				\
		my_sort_int_array.c		\
		my_compute_power_rec.c	\
		my_is_prime.c			\
		my_find_prime_sup.c		\
		my_strcpy.c				\
		my_strncpy.c			\
		my_revstr.c				\
		my_strcmp.c				\
		my_strncmp.c			\
		my_strupcase.c			\
		my_strlowcase.c			\
		my_strcapitalize.c		\
		my_str_isalpha.c		\
		my_str_isnum.c			\
		my_str_islower.c		\
		my_str_isupper.c		\
		my_str_isprintable.c	\
		my_strcat.c				\
		my_strncat.c			\
		my_print_params.c		\
		my_rev_params.c			\
		my_sort_params.c		\
		my_strdup.c				\
		my_concat_params.c		\
		my_show_word_array.c	\
		my_str_to_word_array.c	\
		my_is_palindrome.c		\
		my_intcpy.c				\
		my_int_array_to_int.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-Wall -Wextra -W

all:	$(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@cp $(NAME) ../
	@cp lib.h ../../includes/

clean:
	@rm -f *.o

fclean:	clean
	@rm -f ../$(NAME)

re:	fclean all