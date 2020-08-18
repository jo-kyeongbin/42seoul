/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:51:29 by kjo               #+#    #+#             */
/*   Updated: 2020/08/18 16:22:32 by kjo              ###   ########.fr       */
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
