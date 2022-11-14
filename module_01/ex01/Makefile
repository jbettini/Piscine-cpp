CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	zombieHorde	
SRC		=	main.cpp \
			Zombie.cpp \
			ZombieHorde.cpp

OBJ		=	$(SRC:%.cpp=%.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm  -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re