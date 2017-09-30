/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 17:55:07 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/20 11:41:51 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	lowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		else if ('a' <= str[i] && str[i] <= 'z')
		{
			if (str[i - 1] < 'A' || str[i - 1] > 'z')
			{
				if (str[i - 1] < '0' || str[i - 1] > '9')
					str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
