NAME = zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98


OBJ_DIR = obj
SRCS = main.cpp \
       newZombie.cpp \
       randomChump.cpp \
       Zombie.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re