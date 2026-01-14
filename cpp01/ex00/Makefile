# **************************************************************************** #
#                                   CONFIG                                     #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = 	
OBJS = $(SRCS:.cpp=.o)

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Zombie.hpp
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean 
