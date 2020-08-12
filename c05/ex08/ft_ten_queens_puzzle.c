/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 10:50:35 by kjo               #+#    #+#             */
/*   Updated: 2020/08/12 13:14:43 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_answer(int *answer)
{
	int i;

	i = 0;
	while (i < 10)
	{
		answer[i] += 48;
		write(1, &answer[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		validate(int map[][10], int row, int col)
{
	int k;

	k = 0;
	while (row < 10)
	{
		while (col < 10)
		{
			while (k < 10 && col - row + k < 10 && col + row - k > 0)
			{	
				if (k != row)
				{
					if (map[k][col - row + k] == 1)
						return (0);
					if (map[k][col + row - k] == 1)
						return (0);
				}
				k++;
			}
			col++;
		}
		row++;
	}
	return (1);
}

int		find_answer_map(int row, int col, int *answer, int test[][10])
{
	int k;
	printf("앙\n");
	while (row < 10)
	{
		printf("row앙:%d\n",row);
		if (row == 9 && answer[9] < 0)
			return (validate(test, 0, 0));
		while (col < 10)
		{
			k = 0;
			while (k < row)
			{
				if (test[k++][col] != 1)
					continue;
				col++;
				k = 0;
			}
			test[row][col] = 1;
			answer[row] = col;
			if (find_answer_map(row + 1, 0, answer, test) == 1)
			{
				print_answer(answer);
				return (1);
			}
			test[row][col++] = 0;
			answer[row] = 0;
		}
		row++;
	}
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	int answer[10];
	int test[10][10];
	//int count;

	//count = 0;
	find_answer_map(0,0,answer, test);
	print_answer(answer);
	return (0);
}

int main()
{
	ft_ten_queens_puzzle();
}