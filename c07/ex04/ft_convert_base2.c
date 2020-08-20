/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:51:29 by kjo               #+#    #+#             */
/*   Updated: 2020/08/20 15:54:31 by kjo              ###   ########.fr       */
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
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

void	compact(char *arr, int start)
{
	int i;

	i = 0;
	if (arr[0] == '-')
	{
		i++;
		start--;
	}
	while (i + start < 34)
	{
		arr[i] = arr[i + start];
		i++;
	}
	while (i < 34)
		arr[i++] = '\0';
}

int		get_size_int(int nb)
{
	int count;

	count = 1;
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb / 10)
	{
		count++;
		nb /= 10;
	}
	return (count);
}