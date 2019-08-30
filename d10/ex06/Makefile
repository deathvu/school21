NAME = do-op

SRC = ./fts/ft_atoi.c ./fts/ft_calc.c ./fts/ft_errors.c ./fts/ft_putchar.c ./fts/ft_putnbr.c ./fts/ft_putstr.c ./fts/main.c

OBJ = ft_atoi.o ft_calc.o ft_errors.o ft_putchar.o ft_putnbr.o ft_putstr.o main.o 

FLAGS = -Wall -Wextra -Werror -c

HEADER = ./includes

all :
	gcc -I $(HEADER) $(FLAGS) $(SRC)
	gcc $(OBJ) -o $(NAME)
	
clean :
	rm -f  $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
