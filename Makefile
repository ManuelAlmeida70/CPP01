CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= newZombie.cpp randomChump.cpp Zombie.cpp

OBJS	= $(SRC:.cpp=.o)

EXEC	= runZombie

all: $(EXEC)

$(EXEC): $(OBJS)

