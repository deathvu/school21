#ifndef FT_LIST_H
# define FT_LIST_H
# define STACK_OVERFLOW		-100
# define STACK_UNDERFLOW	-101
# define OUT_OF_MEMORY		-102

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	char					op;
	struct s_stack			*next;
}							op_stack;

typedef struct t_stack
{
	int						statement;
	struct t_stack			*next;
}							num_stack;

void						ft_putchar(char c);
void						ft_putstr(char *str);
char						*ft_strcpy(char *s, char *s1);
void						ft_nbr_check(int nbr);
void						ft_putnbr(int nbr);
int							ft_atoi(char *str);

void						push_num(num_stack **head, int value);
int							pop_num(num_stack **head);
int							peek_num(num_stack *head);
void						push_op(op_stack **head, char value);
char						pop_op(op_stack **head);
char						peek_op(op_stack *head);

int							is_operator(char c);
int							execution(num_stack **st, char op);
int							priority(char op);	

int							eval_expr(char *str);

void						ft_putchar(char c);
void						ft_putnbr(int i);

#endif
