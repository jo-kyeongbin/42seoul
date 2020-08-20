/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:27:31 by kjo               #+#    #+#             */
/*   Updated: 2020/08/20 05:23:48 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(char *a);
int		get_basenbr(char *base, char c);
void	compact(char *arr, int interval);

int		is_valid(char *base)
{
	int i;
	int j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
				|| base[i] == '\n' || base[i] == '\v'
				|| base[i] == '\t' || base[i] == '\f'
				|| base[i] == '\r' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_char(char c, char *base)
{
	int i;

	if (c == '\t' || c == '\n'
			|| c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	if (c == '-')
		return (-1);
	if (c == '+')
		return (-2);
	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i++])
			return (2);
	}
	return (0);
}

int		atoi_base(int base_len, char *from_base, char *nbr)
{
	int		sign;
	int		result;

	while (check_char(*nbr, from_base) == 1)
		nbr++;
	sign = 1;
	while (check_char(*nbr, from_base) < 0)
	{
		if (check_char(*nbr, from_base) == -1)
			sign *= -1;
		nbr++;
	}
	if (check_char(*nbr, from_base) != 2)
		return (0);
	result = 0;
	while (check_char(*nbr, from_base) == 2)
		result = (result * base_len) + get_basenbr(from_base, *(nbr++));
	return (result * sign);
}

char	*itoa_base(int base_len, char *to_base, int nbr_int)
{
	char	*to_base_number;
	int		i;

	i = 33;
	to_base_number = (char *)malloc(sizeof(char) * 34);
	/*if (nbr_int == -2147483648)
	{
		to_base_number[0] = '-';
		to_base_number[i--] = to_base[nbr_int % base_len * -1];
		nbr_int /= (-1 * base_len);
	}*/
	if (nbr_int < 0)
	{
		to_base_number[0] = '-';
		nbr_int *= -1;
	}
	while (nbr_int / base_len)
	{
		to_base_number[i--] = to_base[nbr_int % base_len];
		nbr_int /= base_len;
	}
	to_base_number[i] = to_base[nbr_int % base_len];
	compact(to_base_number, i);
	return (to_base_number);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nbr_int;
	int	base_from_len;
	int	base_to_len;

	if (!is_valid(base_from) || !is_valid(base_to))
		return ((void*)0);
	base_to_len = get_size(base_to);
	base_from_len = get_size(base_from);
	nbr_int = atoi_base(base_from_len, base_from, nbr);
	return (itoa_base(base_to_len, base_to, nbr_int));
}
