NAME = libft.a

SRC = ./srcs

HEADER = ./includes

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o


all : $(NAME)
	gcc -I $(HEADER) -c $(SRC)/ft_putchar.c $(SRC)/ft_putstr.c $(SRC)/ft_strcmp.c $(SRC)/ft_strlen.c $(SRC)/ft_swap.c
	ar rc $(NAME) $(OFILES)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
