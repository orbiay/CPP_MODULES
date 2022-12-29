SRC =  main.cpp HumanA.cpp HumanB.cpp  Weapon.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++ 
NAME =  Humans

all : $(NAME)
$(NAME) : $(SRC)		
		$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean :

fclean :
	rm -rf $(NAME)
re : fclean all