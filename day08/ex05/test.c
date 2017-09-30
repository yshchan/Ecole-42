#include "ft_stock_par.h"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstr(char *str)
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

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
	return ;
}

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*copy(char *dest, char *src)
{
	int i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
		++i;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *str2;

	str2 = (char *)malloc(len(src) + 1);
	if (str2 == NULL)
		return (NULL);
	else
		copy(str2, src);
	return (str2);
}

int		is_space(char c)
{
	if (c != '\n' && c != '\t' && c != ' ')
		return (0);
	return (1);
}

char	*sub(char *str1, int start)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(*str) * len(str1) + 1);
	i = start;
	while (!is_space(str1[i]) && str1[i])
	{
		str[i - start] = str1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		word_count(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (is_space(str[i]))
			i++;
		if (len(sub(str, i)) > 0)
			j++;
		i += len(sub(str, i));
	}
	return (j);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**elements;

	i = 0;
	k = 0;
	j = word_count(str);
	elements = (char **)malloc(sizeof(*str) * j + 1);
	while (i < j)
	{
		while (is_space(str[k]))
			k++;
		elements[i] = (char *)malloc(sizeof(*str) * (len(sub(str, k)) + 1));
		elements[i] = sub(str, k);
		k += len(elements[i]);
		i++;
	}
	elements[i] = 0;
	return (elements);
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i] != '\0')
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return ;
}

t_stock_par		*ft_param_to_tab(int argc, char **argv)
{
	t_stock_par *par;
	int i;

	par = (t_stock_par *)malloc(sizeof(t_stock_par) * argc + 1);
	i = 0;
	while (*argv)
	{
		par[i].size_params = len(*argv);
		par[i].str = *argv;
		par[i].copy = ft_strdup(*argv);
		par[i].tab = ft_split_whitespaces(*argv);
		argv++;
		i++;
	}
	par[i].str = 0;
	return (par);
}

void ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	printf("%s\n", par[3].str);
	while (par[i].str != NULL)
	{
		// ft_putnbr(par->size_params);
		ft_putstr("\n");
		ft_putstr(par->str);
		ft_putstr("\n");
		// ft_putstr(par->copy);
		ft_putstr("\n");
		// ft_print_words_tables(par->tab);
		par++;
		i++;
	}
	printf("total %i\n", i);
	return ;
}

int		main(int argc, char **argv)
{
	t_stock_par *par = ft_param_to_tab(argc, argv);
	ft_show_tab(par);
	return 0;
}