/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:25:23 by kjo               #+#    #+#             */
/*   Updated: 2020/08/05 09:57:22 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"
void	ft_putchar(char c);

void	print_square(int a, int b, int col, int row)
{
	if (row == 0)
	{
		if (col == 0)
			ft_putchar('/');
		else if (col == a - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (row == b - 1)
	{
		if (col == 0)
			ft_putchar('\\');
		else if (col == a - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (col == 0 || col == a - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int a, int b)
{
	int		row;
	int		col;
	char	next;

	row = 0;
	col = 0;
	next = '\n';
	while (row < b)
	{
		col = 0;
		while (col < a)
		{
			print_square(a, b, col, row);
			col++;
		}
		ft_putchar(next);
		row++;
	}
}
