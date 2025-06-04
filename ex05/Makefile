NAME	= harl
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
SRCS 	= main.cpp Harl.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$()
