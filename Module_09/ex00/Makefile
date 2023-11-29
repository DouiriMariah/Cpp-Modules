NAME = btc

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CMD = $(CXX) $(CXXFLAGS)

SRC = main.cpp BitcoinExchange.cpp  #$(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

DEPS = $(OBJ:.o=.d)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) -o $@ $^

-include $(DEPS)
%.o:%.cpp
	$(CXX) -MMD $(CXXFLAGS) -c $< -o $@

clean : 
	rm -f $(DEPS) $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
