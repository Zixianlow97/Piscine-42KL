/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:47:16 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/08/21 17:23:00 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if (row == 0 && col == 0)
				ft_putchar('A');
			else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
				ft_putchar('C');
			else if (row == y - 1 && col == x -1)
				ft_putchar('A');
			else if (row == y - 1 || row == 0 || col == 0 || col == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		row++;
		if (x > 0)
			ft_putchar('\n');
	}
}
