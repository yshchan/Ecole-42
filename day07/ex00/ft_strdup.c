/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 13:35:27 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/21 10:43:31 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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