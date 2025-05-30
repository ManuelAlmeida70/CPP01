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

#Gerar executavel
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

#Regra de compilacao dos objetos
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

#Criar directorio para objetos
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

#Limpar executavel
clean:
	rm -f $(NAME)

#Limpeza total
fclean: clean
	rm -rf $(OBJ_DIR)

#Recompilar
re: fclean all

.PHONY: all clean fclean re