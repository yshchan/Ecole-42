/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 13:34:37 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/19 17:13:13 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		compare(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

void	ft_sort_params(char **params, int size)
{
	int		is_sorted;
	int		i;
	char	*tmp;

	is_sorted = 0;
	while (is_sorted == 0)
	{
		is_sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (compare(params[i], params[i + 1]) > 0)
			{
				is_sorted = 0;
				tmp = params[i];
				params[i] = params[i + 1];
				params[i + 1] = tmp;
				i = 0;
			}
			i++;
		}
	}
}

int		main(int argc, char *argv[])
{
	int i;

	ft_sort_params(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
