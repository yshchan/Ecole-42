/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:18:52 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/07 14:18:54 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	place_queen_at(x, y, int *board)
{
	int a;
	int b;

	// place it straight at incrementals of x and y until 8
	board[a][b] = 1;

	while (a < x)
	{
		while (b < y)
		{
			// place it diagonally if (yn-xn) == (y-x)
			if ((b - a ) == (y - x))
			{
				board[a][b] = 1;
			}
			if (a == x && b == y)
			{
				// place it where it is supposed to be placed
				board[a][b] = 1;
			}
			b++;
		}
		a++;
	}
	return ;
}

void	remove_queen_at(x, y, int *board)
{
	board[y][x] = 0;
	return ;
}

int		ft_eight_queens_puzzle(void)
{
	int board[8][8];
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			if (board[i][j] == 0)
			{
				place_queen_at(i, j, board);
			}
			else
			{
				remove_queen_at(i, j, board);
			}
		}
	}

	return (0);
}

int		main(void)
{
	ft_eight_queens_puzzle();
	return (0);
}