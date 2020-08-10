/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 22:24:25 by kjo               #+#    #+#             */
/*   Updated: 2020/08/10 22:24:33 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_character(char c)
{
	if (c == ' ' || c == '\t'
		|| c == '\v' || c == '\f'
		|| c == '\r' || c == '\n')
		return (1);
	else if (c >= '0' && c <= '9')
		return (2);
	else if (c == '+')
		return (-2);
	else if (c == '-')
		return (-1);
	return (0);
}

int		ft_atoi(char *str)
{
	int sign;
	int result;
	
	sign = 0;
	result = 0;
	while (is_character(*str) == 1)
		str++;
	while (is_character(*str) < 0)
	{
		sign += is_character(*str);
		str++;
	}
	while (is_character(*str) == 2)
	{
		if (result == 0)
			result += *str - '0';
		else
		{
			result *= 10;
			result += *str - '0';
		}
		str++;
	}
	if (sign % 2 == -1)
		result *= (-1);
	return (result);
}