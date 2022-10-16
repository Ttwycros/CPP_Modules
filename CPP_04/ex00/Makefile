NAME	= 	Animals

COMPILER = c++

FLAGS	= 	-Wall -Werror -Wextra -std=c++98

SRC =	Animal.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp \
		Cat.cpp \
		Dog.cpp \
		main.cpp \

INC	= 	Animal.hpp \
		WrongAnimal.hpp \
		Cat.hpp \
		WrongCat.hpp \
		Dog.hpp \

OBJ		= 	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) $(INC)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all