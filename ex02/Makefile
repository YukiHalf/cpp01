NAME= HiBrain

SRC= main.cpp


CXX = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -Rf $(OBJ)

fclean: clean 
	rm -Rf $(NAME)

re: fclean 
	$(MAKE) all

.PHONY: all clean fclean re