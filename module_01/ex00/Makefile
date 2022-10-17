CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	brainz
SRC		=	Zombie.cpp      \
			main.cpp        \
			newZombie.cpp   \
			randomChump.cpp

OBJ		=	$(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm  -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re