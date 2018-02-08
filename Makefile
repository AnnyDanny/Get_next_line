SRC = get_next_line.c main.c
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all: liba GNL

liba:
	@make -C libft/
GNL: $(OBJ)
	gcc -o gnl $(OBJ) -L libft/ -lft
%.o: %.c
		gcc $(FLAGS) -I libft/includes -c -o $@ $<

clean:
	rm -f *.o
	make clean -C libft/

fclean: clean
	rm -f a.out
	make fclean -C libft/

re: fclean all
