/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:01:55 by kjo               #+#    #+#             */
/*   Updated: 2020/08/17 19:18:24 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print_st(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	print_size(int nb)
{
	char	temp[10];
	int		i;

	i = 0;
	while (nb / 10)
	{
		temp[i++] = nb % 10 + '0';
		nb /= 10;
	}
	temp[i] = nb % 10 + '0';
	while (i >= 0)
		write(1, &temp[i--], 1);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		print_st(par[i].str);
		print_size(par[i].size);
		print_st(par[i].copy);
		i++;
	}
}