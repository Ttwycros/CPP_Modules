NAME	= 	Zombie

COMPILER = c++

FLAGS	= 	-Wall -Werror -Wextra -std=c++98

SRC =	Zombie.cpp \
		zombieHorde.cpp \
		main.cpp \

INC	=	Zombie.hpp \

OBJ		= 	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) $(INC)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all