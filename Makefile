NAME = push_swap

SRC = main.c ft_atolong.c  validations.c list_operations.c\
push.c reverse_rotate.c rotate.c swap.c sort2to3.c sort4to5.c radixsort.c\

CC = cc

LIBRARY = push_swap.h
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra
all : $(NAME)

$(NAME) : $(OBJ) $(LIBRARY)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	 rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY : all re fclean clean