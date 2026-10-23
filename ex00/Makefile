NAME= ZOMBIE

SRCS= main.cpp newZombie.cpp Zombie.cpp randomChump.cpp
OBJS= $(SRCS:.cpp=.o)
INC= Zombie.hpp

CXX= c++
CFLAGS= -Wextra -Werror -Wall -std=c++98

RM= rm -Rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	$(CXX) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean 
	$(MAKE) all 

.PHONY: all clean fclean re