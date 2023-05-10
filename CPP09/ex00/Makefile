SRC = main.cpp	BitcoinExchange.cpp
NAME = btc
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

all : $(NAME)
$(NAME) : $(SRC)		
		$(CC) $(CPPFLAGS) $(SRC) -o $(NAME) 

clean :

fclean : 
		rm -rf $(NAME)
re : fclean all