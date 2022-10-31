NAME=Zombie
CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=Zombie.h Zombie.cpp Zombie.hpp newZombie.cpp randomChump.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(CPPFLAGS) -o $(NAME)

.PHONY: clean

clean:
	rm -f *.o

fclean:
	rm -f *.o $(NAME)

re: fclean all