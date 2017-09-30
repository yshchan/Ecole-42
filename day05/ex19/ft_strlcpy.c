/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:34:32 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/19 14:33:16 by ychauhan         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	if (size < len(src))
		return (len(copy_n(dest, src, size)) - len(src) - 1);
	return (len(copy_n(dest, src, size)));
}
