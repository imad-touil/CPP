# **************************************************************************** #
#                                   CONFIG                                     #
# **************************************************************************** #

NAME = Sedisforlosers
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES = Weapon.hpp HumanA.hpp HumanB.hpp

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	@$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean 
