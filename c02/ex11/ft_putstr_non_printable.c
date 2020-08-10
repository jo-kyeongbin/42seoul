/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:16:04 by kjo               #+#    #+#             */
/*   Updated: 2020/08/10 10:01:39 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char input)
{
	char a[3];

	a[0] = '\\';
	a[1] = (input / 16) + 48;
	a[2] = (input % 16) < 10 ? (input % 16) + 48 : (input % 10) + 'a';
	write(1, a, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
