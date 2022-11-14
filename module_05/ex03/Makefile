CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	bureaucrat	
SRC		=	Bureaucrat.cpp \
			Form.cpp \
			Intern.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \
			main.cpp

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