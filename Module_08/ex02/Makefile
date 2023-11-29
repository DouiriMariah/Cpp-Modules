EXEC = Mutant_stack

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

CMD = $(CC) $(FLAGS)

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(CMD) -o $@ -c $<

$(EXEC) : $(OBJ)
	$(CMD) -o $@ $^

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(EXEC)

all : $(EXEC)

re : fclean all

.PHONY : all clean fclean re