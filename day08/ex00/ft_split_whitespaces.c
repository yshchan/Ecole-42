/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 16:15:54 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/20 20:24:08 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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
