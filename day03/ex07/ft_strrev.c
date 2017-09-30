/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 09:20:51 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/06 09:21:32 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	return (len);
}

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = len(str);

	while (i < (j / 2))
	{
		tmp = str[j - (i + 1)];
		str[j - (i + 1)] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}
