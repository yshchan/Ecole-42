/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 19:01:11 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/01 10:57:08 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char alp;
	char end;

	alp = 'z';
	end = 'a';
	while (alp >= end)
	{
		ft_putchar(alp);
		--alp;
	}
	return ;
}
