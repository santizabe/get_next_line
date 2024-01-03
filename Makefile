NAME = get_next_line.a

FLAGS = -Wall -Werror -Wextra

SRC = get_next_line.c get_next_line_utils.c

BONUS = get_next_line_bonus.c get_next_line_utils_bonus.c

OBJS = $(SRC:c=o)

B_OBJS = $(BONUS:c=o)

bonus: $(B_OBJS)
	ar rcs $(NAME) $(B_OBJS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean:
	rm -f $(NAME)

re: fclean allS

.PHONY: clean fclean all re bonus