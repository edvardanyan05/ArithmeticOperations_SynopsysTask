# Executable name
NAME = program

# Compiler
CPP = g++

# Compiler flags
CPPFLAGS = -Wall -Wextra -Werror

# All .cpp files in the folder
SRC = $(wildcard *.cpp)

# Replace .cpp with .o
OBJ = $(SRC:.cpp=.o)

# Default rule
all: $(NAME)

# Link object files
$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

# Compile .cpp into .o
%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -f $(OBJ)

# Remove everything
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

.PHONY: all clean fclean re