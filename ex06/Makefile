NAME		= pragram
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS		= Harl.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.cpp: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean clean

.PHONY: all clean fclean re