# **************************************************************************** #
#                                   CONFIG                                     #
# **************************************************************************** #

NAME = program
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp\
		AMateria.cpp\
		Ice.cpp\
		Cure.cpp\
		Character.cpp\
		MateriaSource.cpp


OBJS = $(SRCS:.cpp=.o)
HEADERS = AMateria.hpp\
		Ice.hpp\
		Cure,hpp\
		Character.hpp\
		ICharacter.hpp\
		MateriaSource.hpp\
		IMateriaSource.hpp
		

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp 
	@$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean 
