/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 08:06:12 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/01 15:30:34 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_printcharnum(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_iterate_from_to(char a, char b, char c, char to)
{
	while (a <= to)
	{
		while (b <= to)
		{
			while (c <= to)
			{
				if (a < b && b < c)
				{
					ft_printcharnum(a, b, c);
				}
				c = c + 1;
			}
			c = b;
			b = b + 1;
		}
		b = a;
		a = a + 1;
	}
}

void	ft_print_comb(void)
{
	ft_iterate_from_to('0', '0', '0', '9');
}
