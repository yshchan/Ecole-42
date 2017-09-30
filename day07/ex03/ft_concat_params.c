/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 14:29:46 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/20 20:23:50 by ychauhan         ###   ########.fr       */
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

char	*copy(char *dest, char *src)
{
	int i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
		++i;
	return (dest);
}

char	*concat(char *dest, char *src)
{
	copy(dest + len(dest), src);
	return (dest);
}

char	*concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*params;

	i = 1;
	j = 0;
	params = (char *)malloc(len(params));
	while (i < argc)
	{
		concat(params, argv[i]);
		if (argv[i] != argv[argc - 1])
			concat(params, "\n");
		else
			concat(params, "\0");
		i++;
	}
	return (params);
}
