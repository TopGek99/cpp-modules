NAME=Violence
CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=Weapon.cpp Weapon.hpp HumanA.cpp HumanA.hpp HumanB.cpp HumanB.hpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(CPPFLAGS) -o $(NAME)

.PHONY: clean

clean:
	rm -f *.o

fclean:
	rm -f *.o $(NAME)

re: fclean all