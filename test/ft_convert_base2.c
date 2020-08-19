/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 14:40:00 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/18 15:03:29 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_check_base(char *base)
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

int		ft_check_char(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0' && base[i] != c)
		i++;
	if (base[i] == c)
		return (i);
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int value;
	int sign;

	if (!ft_check_base(base))
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
	while (str[i] != '\0' && ft_check_char(str[i], base) >= 0)
	{
		value = value * ft_strlen(base) + ft_check_char(str[i], base);
		i++;
	}
	if (sign % 2 == 1)
		value = value * (-1);
	return (value);
}

void	ft_malloc_num(long *num, char **num_cvt)
{
	int		len;
	long	num_temp;

	len = 0;
	num_temp = *num;
	if (num_temp == 0 || num_temp < 0)
		len++;
	if (num_temp < 0)
		num_temp *= (-1);
	while (num_temp > 0)
	{
		num_temp /= 10;
		len++;
	}
	*num_cvt = (char *)malloc(sizeof(char) * (len + 1));
	if (*num < 0)
	{
		*num *= (-1);
		(*num_cvt)[0] = '-';
		(*num_cvt)[1] = '\0';
	}
	else
		(*num_cvt)[0] = '\0';
}
