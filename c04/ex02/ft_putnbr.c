/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 22:24:42 by kjo               #+#    #+#             */
/*   Updated: 2020/08/10 22:24:45 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int *number, int *index)
{
	char temp;
	
	while(*index >= 0)
	{
		temp = number[*index] + '0';
		write(1, &temp, 1);
		*index = *index - 1;
	}
}

void	digit(int nb, int *index, int *number)
{
	int mod_value;

	while (nb > 0)
	{
		mod_value = nb % 10;
		number[*index] = mod_value;
		*index = *index + 1;
		nb = nb / 10;
	}
	*index -= 1;
}

void	ft_putnbr(int nb)
{
	int index;
	int number[10];
	int i = 0;
	index = 0;
	if (nb == -2147483648)
		write(1,"-2147483648",11);
	else if (nb == 0)
		write(1,"0",1);
	else if (nb < 0)
	{
		nb = nb * (-1);
		digit(nb, &index, number);
		write(1,"-",1);
		print_number(number, &index);
	}
	else
	{
		digit(nb, &index, number);
		print_number(number, &index);
	}
}