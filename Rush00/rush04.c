/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:07:36 by llo-surd          #+#    #+#             */
/*   Updated: 2021/11/27 15:19:01 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	printchar(int x, int y, int row, int col)
{
	if (row == 1)
	{
		if (col == 1)
			ft_putchar('A');
		else if (col == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (row > 1 && row < y)
	{
		if (col == 1 || col == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
	else if (row == y)
	{
		if (col == 1)
			ft_putchar('C');
		else if (col == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			printchar(x, y, row, col);
			col++;
		}
		row++;
		write(1, "\n", 1);
	}
}