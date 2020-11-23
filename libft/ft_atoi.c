/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:11:05 by kjo               #+#    #+#             */
/*   Updated: 2020/11/23 15:11:27 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static size_t	pass_whitespace(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	return (i);
}

int				ft_atoi(const char *str)
{
	size_t	i;
	unsigned long	result;
	int				sign;
	i = pass_whitespace(str); 
	sign = 1;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	result = str[i] - '0';
	i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (result>=(unsigned long)LONG_MAX && sign == 1)
		return (-1);
	if (result>=(unsigned long)LONG_MIN && sign == -1)
		return (0);
	result = (int)result;
	return (result * sign);
}

