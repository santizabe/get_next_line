NAME = get_next_line.a

FLAGS = -Wall -Werror -Wextra

SRC = get_next_line.c get_next_line_utils.c

OBJS = $(SRC:c=o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME);

re: fclean all

.PHONY: clean fclean all re