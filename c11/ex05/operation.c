/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 01:17:14 by kjo               #+#    #+#             */
/*   Updated: 2020/08/21 02:54:38 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_op.h"

int	(*select_op(char *str))(int, int)
{
	if (!str[0] || str[1])
		return (0);
	if (str[0] == '+')
		return (&sum);
	else if (str[0] == '-')
		return (&minus);
	else if (str[0] == '*')
		return (&mul);
	else if (str[0] == '/')
		return (&div);
	else if (str[0] == '%')
		return (&mod);
	return (0);
}

int	check_op(int (*f)(int, int), int n2)
{
	if (f == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else if (n2 == 0 && f == div)
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	else if (n2 == 0 && f == mod)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	result;
	int	(*calculator)(int, int);

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	calculator = select_op(argv[2]);
	if (check_op(calculator, n2))
		return (0);
	result = calculator(n1, n2);
	ft_itoa(result);
	return (0);
}