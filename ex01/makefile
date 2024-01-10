NAME = PhoneBook
CPPFLAGS = -Wall -Werror -Wall -std=c++98
CC = g++
SRC =  main.cpp Phonebook.cpp Contact.cpp
OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

.c.o:
	${CC} ${CPPFLAGS} -I. -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 

