#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *cp_str;

int high_prior_opers(); /* recall functions of each other made me add prototype of high_prior_opers
							to global scope to avoid issue of wrong declaration of funcs */ 

int	nbr(void) /* taking num from str */
{
	int r;

	r = *(cp_str)++ - '0';
	while (*cp_str >= '0' && *cp_str <= '9')
		r = r * 10 + *(cp_str)++ - '0';
	return (r);
}

int	prior_eval(void) /* main evaluation */
{
	int r;

	r = high_prior_opers();
	while (*cp_str == '+' || *cp_str == '-')
	{
		if (*(cp_str)++ == '+')
			r += high_prior_opers();
		else
			r -= high_prior_opers();
	}
	return(r);
}

int	vefir(void)
{
	int r;

	if (*cp_str >= '0' && *cp_str <= '9')
		return (nbr());
	else if (*cp_str == '(')
	{
		*(cp_str)++;
		r = prior_eval();
		*(cp_str)++;
		return (r);
	}
	else if (*cp_str == '-')
	{
		*(cp_str)++;
		return (-vefir());
	}
	return (0);
}

int	high_prior_opers(void) /* evaluate segment of high priority */
{
	int r;
	int semn;

	r = vefir();
	while (*cp_str == '*' || *cp_str == '/' || *cp_str == '%')
	{
		semn = *(cp_str)++;
		switch(semn)
		{
			case '*':
				r *= vefir();
				break;
			case '/':
				r /= vefir();
				break;
			case '%':
				r %= vefir();
				break;
		}
	}
	return (r);
}

void eval(char *str) /* reformat str and start evaluating process */
{
	int i;
	int j;

	i = 0;
	j = 0;
	cp_str = (char*)malloc(sizeof(char) * strlen(str) + 1);
	while (str[i])
	{
		if (str[i] != ' ')
		{
			cp_str[j] = str[i];
			j++;
		}
		i++;
	}
	cp_str[j] = '\0';
	printf("%d\n" ,prior_eval());
}

int main(int argc, char** argv) {
	if(argc == 2)
		eval(argv[1]);
	return 0;
}
