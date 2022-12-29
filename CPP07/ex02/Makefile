SRC = Array.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = template

all : $(NAME)
$(NAME) : $(SRC)		
		$(CC) $(CPPFLAGS) $(SRC) -o $(NAME) -fsanitize=address

cleen :

fcleen : 
		rm -rf $(NAME)
re : fcleen all
