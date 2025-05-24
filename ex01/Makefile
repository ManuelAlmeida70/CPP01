NAME		= zombiehorde
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 $(INCLUDE)
INCLUDE		= -Iinclude

SRC_DIR		= src
OBJ_DIR		= obj

SRCS		= $(SRC_DIR)/main.cpp \
			  $(SRC_DIR)/Zombie.cpp \
		      $(SRC_DIR)/ZombieHorde.cpp

OBJS			= $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re