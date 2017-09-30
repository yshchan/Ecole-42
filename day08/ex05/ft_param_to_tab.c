/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 21:39:35 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/21 11:01:08 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

t_stock_par		*ft_param_to_tab(int argc, char **argv)
{
	t_stock_par *par;

	par = (t_stock_par *)malloc(sizeof(t_stock_par) * argc + 2);
	while (*argv)
	{
		par->size_params = len(*argv);
		par->str = *argv;
		par->copy = ft_strdup(*argv);
		par->tab = ft_split_whitespaces(*argv);
		argv++;
	}
	*par->str = 0;
	return (par);
}
