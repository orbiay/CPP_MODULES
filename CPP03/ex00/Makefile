SRC = ClapTrap.cpp main.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = ClapTrap

all : $(NAME)
 $(NAME) : $(SRC)
				  $(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean : clean
re : fclean all