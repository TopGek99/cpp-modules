SRC = src/*.cpp
NAME = Fixed

INC = inc
HEADERS = -I$(INC)
FLAGS = -Wall -Werror -Wextra $(HEADERS)

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