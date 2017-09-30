/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 21:40:47 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/21 10:35:06 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void ft_show_tab(struct s_stock_par *par)
{
	while (*par->str)
	{
		ft_putnbr(par->size_params);
		ft_putchar('\n');
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putchar(par->copy);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);		
		par++;
	}
}
