/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 14:57:23 by kjo               #+#    #+#             */
/*   Updated: 2020/08/16 15:25:11 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int i;
	int range;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	result = (int *)malloc(sizeof(int) * range);
	while (i < range)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
