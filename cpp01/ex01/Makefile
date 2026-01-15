# **************************************************************************** #
#                                   CONFIG                                     #
# **************************************************************************** #

NAME = MoarBrainz
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = Zombie.cpp\
		ZombieHorde.cpp\
		main.cpp
OBJS = $(SRCS:.cpp=.o)

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Zombie.hpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean 
