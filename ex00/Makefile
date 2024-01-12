NAME = megaphone
SRC = Megaphone.cpp
OBJ = ${SRC:.cpp=.o}
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = g++

all : $(NAME)

%.o: %.cpp
	${CXX} ${CXXFLAGS} -o $@ -c $<

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)


fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY :
	make, flcean, clean, re
