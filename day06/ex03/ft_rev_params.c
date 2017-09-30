/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <ychauhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 13:32:38 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/18 17:13:42 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

int		main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
