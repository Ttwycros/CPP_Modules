NAME	= 	Fixed
COMPILER = c++

FLAGS	= 	-Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \
		Fixed.cpp \

INC	=	Fixed.hpp \

OBJ		= 	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) $(INC)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all