NAME	= 	Violence

COMPILER = c++

FLAGS	= 	-Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \

INC	=	Weapon.hpp \
		HumanA.hpp \
		HumanB.hpp \

OBJ		= 	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) $(INC)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all