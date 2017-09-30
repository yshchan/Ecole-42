/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 13:33:52 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/06 13:33:54 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SQR(x) (x * x)

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (SQR(i) < nb)
		i++;
	if (SQR(i) == nb)
		return (i);
	return (0);
}