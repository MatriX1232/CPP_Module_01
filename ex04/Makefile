CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = sed_is_for_loosers
NAME_TEST = tests

FILES = checks.cpp

OBJS = ${FILES:.cpp=.o}


all: $(NAME) $(NAME_TEST)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) main.cpp $(OBJS) -o $(NAME)

$(NAME_TEST): $(OBJS)
	$(CC) $(CPPFLAGS) tests.cpp $(OBJS) -o $(NAME_TEST)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(NAME_TEST)

re: fclean all

.PHONY: all clean fclean re
