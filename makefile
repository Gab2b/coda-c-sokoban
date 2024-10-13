NAME = Sokoban

SRCS = main.c \
    initialisation.c \
    caisse.c \
	deplacements.c\
	interface.c

all :  $(NAME)

$(NAME): $(SRCS)
		gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	
re: fclean all