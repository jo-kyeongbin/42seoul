/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:32:02 by kjo               #+#    #+#             */
/*   Updated: 2020/08/17 22:02:50 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					get_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*str_dump(char *str, int len)
{
	char	*copy;
	int		i;

	if ((copy = (char *)malloc(sizeof(char) * (len + 1))) == 0)
		return (0);
	i = -1;
	while (str[++i])
		copy[i] = str[i];
	copy[i] = 0;
	return (copy);
}

t_stock_str			*convert_str(t_stock_str *tab, char *str)
{
	tab->str = str;
	tab->size = get_size(str);
	tab->copy = str_dump(str, tab->size);
	if (tab->copy == 0)
		return (0);
	return (tab);
}

void				free_tab(t_stock_str *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
		free(tab[i++].copy);
	free(tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	t_stock_str	*temp;
	int			i;

	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == 0)
		return (0);
	result[ac].str = 0;
	i = 0;
	while (i < ac)
	{
		temp = convert_str(result + i, av[i]);
		if (temp == 0)
		{
			free_tab(result, i);
			return (0);
		}
		i++;
	}
	return (result);
}
