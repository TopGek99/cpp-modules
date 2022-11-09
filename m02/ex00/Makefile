NAME=Harl
CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=Harl.cpp Harl.hpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(CPPFLAGS) -o $(NAME)

.PHONY: clean

clean:
	rm -f *.o

fclean:
	rm -f *.o $(NAME)

re: fclean all