/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:20:21 by kjo               #+#    #+#             */
/*   Updated: 2020/08/13 16:34:33 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		absolute(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int		promising(int k, int *q)
{
	int i;

	i = 0;
	if (k == 0)
		return (1);
	while (i < k)
	{
		if ((q[i] == q[k] || (absolute(q[i] - q[k]) == absolute(i - k))))
			return (0);
		i++;
	}
	return (1);
}

void	print_answer(int *q)
{
	int		i;
	char	temp;
	
	i = 0;
	while (i < 10)
	{
		temp = q[i] + 48;
		write(1, &temp, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	nqeen(int i, int *q)
{
	int j;

	j = 0;
	if (i == 10)
	{
		q[10]++;
		print_answer(q);
	}
	else
	{
		while (j < 10)
		{
			q[i] = j;
			if (promising(i, q) == 1)
				nqeen(i + 1, q);
			j++;
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	int q[11];

	q[10] = 0;
	nqeen(0, q);
	return (q[10]);
}