NAME = a.out
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Serializer.cpp
OBJ_F = ./obj
OBJ = $(SRC:%.cpp=$(OBJ_F)/%.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

$(OBJ_F)/%.o: %.cpp
	@mkdir -p $(OBJ_F)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJ_F)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.Phony: all clean fclean re