/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 00:45:37 by kjo               #+#    #+#             */
/*   Updated: 2020/08/11 02:01:16 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		is_vaild_value(char *base)
{
	int i;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-' || *base == '\t' || *base == '\r'
				|| *base == '\n' || *base == ' '
				|| *base == '\v' || *base == '\f')
			return (0);
		i = 1;
		while (*(base + i) != '\0')
		{
			if (*base == *(base + i))
				return (0);
			i++;
		}
		base++;
	}
	return (1);
}

int		is_character(char c, char *base)
{
	if (c == ' ' || c == '\t'
		|| c == '\v' || c == '\f'
		|| c == '\r' || c == '\n')
		return (1);
	else if (c == '+')
		return (-2);
	else if (c == '-')
		return (-1);
	while (*base != '\0')
	{
		if (c == *base)
			return (3);
		base++;
	}
	return (0);
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

int		find_base(char c, char *base)
{
	int i;

	i = 0;
	while (*base != c)
	{
		i++;
		base++;
	}
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int sign;
	int result;
	int size;

	if (!(is_vaild_value(base)))
		return (0);
	sign = 0;
	while (is_character(*str, base) == 1)
		str++;
	while (is_character(*str, base) < 0)
	{
		sign += is_character(*str, base);
		str++;
	}
	if (is_character(*str, base) != 3)
		return (0);
	result = find_base(*str, base);
	str++;
	size = base_size(base);
	while (is_character(*str, base) == 3)
	{	
		result = result * size + find_base(*str, base);
		str++;
	}
	return (sign % 2 * (-1) == 1 ? result * (-1) : result);
}