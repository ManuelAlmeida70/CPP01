NAME		= human
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98


#Directories
SRC_DIR		= src
OBJ_DIR		= obj

SRCS		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

#Gerar executavel
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

#Regra de compilacao dos objetos
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

#Limpar executavel
clean:
	rm -f *.o

#Limpeza total
fclean: clean
	rm -f $(NAME)

#Recompilar
re: fclean all

.PHONY: all clean fclean re