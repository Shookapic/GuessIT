SRC = main.cc \

OBJ = $(SRC:.cc=.o)

CC = g++

NAME = GuessIT

all:	$(OBJ)
	$(CC) -o $(NAME) $(SRC)

clean:
	find -type f -name "#*#" -delete -o \
	-type f -name "*~" -delete -o -type f -name "*.o" -delete -o \
	-type f -name "*.gc*" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all
