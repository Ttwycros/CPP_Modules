NAME	= 	megaphone

COMPILER = c++

FLAGS	= 	-Wall -Werror -Wextra -std=c++98

SRC		= 	megaphone.cpp

OBJ		= 	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all