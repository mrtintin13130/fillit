FLAGS = -Wall -Wextra -Werror

NAME = libft.a

FILES = *.c

all: $(NAME)

$(NAME):
	@echo "all:       Creating the library $(NAME)"
	@gcc -c $(FILES) $(FLAGS) && ar rc $(NAME) *.o

clean:
	@echo "clean:     Cleaning objects"
	@rm -f *.o

fclean: clean
	@echo "fclean:    Full clean"
	@rm -rf $(NAME)

re: fclean all
