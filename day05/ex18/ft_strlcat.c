/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:31:00 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/19 14:38:38 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*copy_n(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (((dest[i] = src[i]) != '\0') && i < n)
	{
		++i;
		dest[i] = '\0';
	}
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	return (len(copy_n(dest, src, size)));
}
