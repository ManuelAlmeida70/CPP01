NAME		= human
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 $(INCLUDE)
INCLUDE		= -Iinclude

#Directories
SRC_DIR		= src
OBJ_DIR		= obj

SRCS		= $(SRC_DIR)/main.cpp $(SRC_DIR)/HumanA.cpp $(SRC_DIR)/HumanB.cpp $(SRC_DIR)/Weapon.cpp

OBJS		= $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re