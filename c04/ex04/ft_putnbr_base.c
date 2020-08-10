/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 22:25:41 by kjo               #+#    #+#             */
/*   Updated: 2020/08/11 01:51:34 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_vaild_base(char *base)
{
	int i;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == base[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	print_number(int size, int nb, char *base)
{
	if (nb / size < 1)
		write(1, &base[nb], 1);
	else
	{
		print_number(size, nb / size, base);
		write(1, &base[nb % size], 1);
	}
}

int		base_size(char *base)
{
	int size;

	size = 0;
	while (*base != '\0')
	{
		base++;
		size++;
	}
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	char	temp;

	size = base_size(base);
	if (!(is_vaild_base(base)))
		return ;
	if (nbr >= 0)
	{
		print_number(size, nbr, base);
		return ;
	}
	else
	{
		write(1, "-", 1);
		temp = base[nbr % size * (-1)];
		print_number(size, nbr / size * (-1), base);
		write(1, &temp, 1);
	}
}