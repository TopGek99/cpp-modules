SRC = src/*.cpp
NAME = Harl

INC = inc
HEADERS = -I$(INC)
FLAGS = -Wall -Werror -Wextra -std=c++98 $(HEADERS)

all:
	@clear
	@c++ $(SRC) $(FLAGS) -o $(NAME)
	@echo Good to go
	

clean:
	@clear
	@rm -f $(NAME)
	@echo output files removed

fclean: clean

re: clean all