NAME = account
CXXFLAGS = -Wall -Werror -Wall #-std=c++98
CXX = g++
SRC = Account.cpp tests.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

.c.o:
	${CXX} ${CXXLAGS} -I. -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
