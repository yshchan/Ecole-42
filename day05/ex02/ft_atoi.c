/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 16:08:21 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/20 10:12:58 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char el)
{
	if (7 <= el && el <= 12)
		return (1);
	else
		return (0);
}

int		is_digit(char el)
{
	if ('0' <= el && el <= '9')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int nb;
	int sign;
	int i;

	i = 0;
	nb = 0;
	sign = 1;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (is_digit(str[i + 1]))
		{
			sign = (str[i] == '+') ? 1 : -1;
			i++;
		}
		else
			return (0);
	}
	while (is_digit(str[i]))
		nb = nb * 10 + str[i++] - '0';
	return (nb * sign);
}
