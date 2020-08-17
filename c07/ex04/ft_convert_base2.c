/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:51:29 by kjo               #+#    #+#             */
/*   Updated: 2020/08/17 14:07:56 by kyeongbin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_size(char *a)
{
	int i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int		get_basenbr(char *base, char c)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

void	compact(char *arr, int interval)
{
	int i;

	i = 0;
	if (arr[0] == '-')
	{
		i++;
		interval--;
	}
	while (i + interval < 34)
	{
		arr[i] = arr[i + interval];
		i++;
	}
	while (i < 34)
		arr[i++] = '\0';
}
