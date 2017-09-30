/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 21:40:05 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/20 22:34:10 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_stock_par
{
	int		size_params;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

int		len(char *str);
char	*ft_strdup(char *src);
char	**ft_split_whitespaces(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_print_words_tables(char **tab);
void 	ft_show_tab(struct s_stock_par *par);

#endif