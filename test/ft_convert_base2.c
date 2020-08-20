/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 14:40:00 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/20 19:52:35 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		check_base(char *base)
{
	int i;
	int j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
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

	i = 0;
	while (base[i] != '\0' && base[i] != c)
		i++;
	if (base[i] == c)
		return (i);
	return (-1);
}

int		atoi_base(char *str, char *base)
{
	int i;
	int value;
	int sign;

	if (!check_base(base))
		return (0);
	i = 0;
	sign = 0;
	value = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] != '\0' && check_char(str[i], base) >= 0)
	{
		value = value * get_size(base) + check_char(str[i], base);
		i++;
	}
	if (sign % 2 == 1)
		value = value * (-1);
	return (value);
}

void	malloc_num(long *num, char **num_cvt)
{
	*num_cvt = (char *)malloc(sizeof(char) * 34);
	if (*num < 0)
	{
		*num *= (-1);
		(*num_cvt)[0] = '-';
		(*num_cvt)[1] = '\0';
	}
	else
		(*num_cvt)[0] = '\0';
}
