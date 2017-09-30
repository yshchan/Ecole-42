/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 14:33:18 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/17 17:59:48 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SQR(x) (x * x)

int		sqrt(int nb)
{
	int i;

	i = 0;
	while (SQR(i) < nb)
		i++;
	if (SQR(i) == nb)
		return (i);
	return (0);
}

int		ft_is_prime(int nb)
{
	int mod;

	mod = 2;
	while (mod < sqrt(nb))
		mod++;
		if (nb < 0)
			return (0);
		return (nb % mod);
}
