/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 14:09:06 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/20 20:23:39 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *ints;
	int i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	ints = (int *)malloc(max - min + 1);
	while ((min + i) < max)
	{
		ints[i] = (min + 1);
		i++;
	}
	ints[i] = 0;
	*range = ints;
	return (i);
}
