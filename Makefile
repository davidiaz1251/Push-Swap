NAME = push_swap
SOURCE =	main.c			\
			errors.c		\
			free.c			\
			lst_function.c	\
			swap.c			\
			check_stack.c	\
			push_stack.c	\
			rotate.c		\
			low_number.c	\
			algorithm.c		\
			minmax.c

OBJ = $(SOURCE:.c=.o)
LIBFT = Libft/libft.a
CFLAGS := -Wall -Werror -Wextra -g3

all: $(NAME)
	@echo 'make ok'

$(NAME) : $(OBJ) $(LIBFT)
	@$(CC) $(OBJ) -LLibft -lft -o $(NAME)

$(LIBFT) : 
	@make bonus -C ./Libft/

clean :	
	@rm -f $(OBJ)
	@make clean -C ./Libft/
	@echo 'clean ok'

fclean: clean
	@rm -f $(NAME)
	@make fclean -C ./Libft/
	@echo 'fclean ok'

re: fclean all

test: all
	cp ./$(NAME) test/
	cd test/; bash ./push_swap_test.sh 4 4