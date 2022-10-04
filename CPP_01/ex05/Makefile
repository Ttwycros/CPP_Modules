NAME	= 	Harl_but_actually_Karen

COMPILER = c++

FLAGS	= 	-Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \
		Harl.cpp \

INC	=	Harl.hpp \

OBJ		= 	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) $(INC)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all