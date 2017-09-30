/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 18:39:23 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/01 10:56:06 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char alp;
	char end;

	alp = 'a';
	end = 'z';
	while (alp <= end)
	{
		ft_putchar(alp);
		alp++;
	}
	return ;
}
