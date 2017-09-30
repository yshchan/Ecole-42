/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 11:35:07 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/17 17:53:52 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar_comb(int a, int b, int c, int d)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(' ');
	ft_putchar(c + '0');
	ft_putchar(d + '0');
	if (a + b + c + d != (9 * 3 + 8))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int i;
	int a;
	int b;
	int c;
	int d;

	i = 0;
	while (i < 10000)
	{
		a = i / 1000;
		b = (i / 100) % 10;
		c = (i / 10) % 10;
		d = i % 10;
		if (b != d && c + d > a + b)
		{
			ft_putchar_comb(a, b, c, d);
		}
		i++;
	}
	return ;
}