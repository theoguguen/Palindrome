##
## EPITECH PROJECT, 2021
## Synthesis
## File description:
## Makefile
##

SRCDIR	=	src/

SRC	=	$(SRCDIR)main.c				\
		$(SRCDIR)arg.c				\
		requirement.c				\
		$(SRCDIR)help.c				\
		$(SRCDIR)palindrome.c		\
		$(SRCDIR)my_int_reverser.c	\
		$(SRCDIR)is_palindrome.c	\
		$(SRCDIR)p_flag.c			\
		$(SRCDIR)n_flag.c			\
		$(SRCDIR)init.c				\
		$(SRCDIR)check.c			\
		$(SRCDIR)my_converter.c		\
		$(SRCDIR)exit.c				\
		$(SRCDIR)print.c			\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I includes/

NAME	=	palindrome

all:	$(NAME)

$(NAME):	$(OBJ)
	@cd lib/my && $(MAKE)
	@gcc -o $(NAME) $(OBJ) -L lib -lmy

debug:	CFLAGS += -g
debug:	re

clean:
	@cd lib/my && $(MAKE) clean
	@rm -f $(OBJ)

fclean:	clean
	@cd lib/my && $(MAKE) fclean
	@rm -f $(NAME)

re:	fclean all