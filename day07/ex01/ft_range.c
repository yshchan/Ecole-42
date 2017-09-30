/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 13:49:05 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/20 09:19:31 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ints;
	int i;

	if (min >= max)
		return (NULL);
	else
	{
		i = 0;
		ints = (int *)malloc(max - min + 1);
		while ((min + i) < max)
		{
			ints[i] = (min + i);
			i++;
		}
	}
	ints[i] = 0;
	return (ints);
}
