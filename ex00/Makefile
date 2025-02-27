NAME = convert
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp ScalarConverter.cpp utils.cpp
RM = rm -rf
OBJ_F = ./obj
obj = $(SRC:%.cpp=$(OBJ_F)/%.o)

all: $(NAME)

$(NAME): $(obj)
	$(CC) $(CFLAGS) $(obj) -o $(NAME)

$(OBJ_F)/%.o: %.cpp
	@mkdir -p $(OBJ_F)
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) $(obj) $(OBJ_F)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.Phony: all clean fclean re
