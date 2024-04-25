NAME = bsq

CFLAGS = -g -Wall -Wextra -Werror

# Include directory
INCLUDES = -I include

# Source files
SRCS = src/main.c src/parse_rule.c src/read_file.c src/utils2.c \
       src/check_map.c src/parse_map.c src/print_map.c src/solve.c \
       src/utils.c

# Object files
OBJS = $(SRCS:.c=.o)

# Default target
all: $(NAME)

# Rule to compile each source file into an object file
%.o: %.c
	cc $(CFLAGS) $(INCLUDES) -c $< -o $@

# Linking all object files into the executable
$(NAME): $(OBJS)
	cc $(OBJS) -o $(NAME)

# Clean target to remove object files and the executable
clean:
	rm -f $(OBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

# Phony targets
.PHONY: all clean fclean re