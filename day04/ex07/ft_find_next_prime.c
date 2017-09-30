/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 14:43:19 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/17 18:00:08 by ychauhan         ###   ########.fr       */
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

int		is_prime(int nb)
{
	int mod;

	mod = 2;
	while (mod < sqrt(nb))
		mod++;
		if (nb < 0)
			return (0);
		return (nb % mod);
}

int		ft_find_next_prime(int nb)
{
	if (is_prime(nb))
		return (nb + 2);
	else
		return (nb + 1);
	return (0);
}
