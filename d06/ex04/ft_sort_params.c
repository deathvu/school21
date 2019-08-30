/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:56:48 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/07 17:45:09 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_sort_params(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
	ft_putchar('\n');
}

void	swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (int)s1[i] - (int)s2[i];
}

int		main(int argc, char **argv)
{
	int uns;
	int i;
	int j;

	j = 1;
	uns = 1;
	while (uns)
	{
		uns = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap(argv + i, argv + i + 1);
				uns = 1;
			}
			i++;
		}
	}
	while (j < argc)
	{
		ft_sort_params(argv[j]);
		j++;
	}
}
