/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:55:17 by kjo               #+#    #+#             */
/*   Updated: 2020/08/16 18:00:16 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*blank_pointer(void)
{
	char *temp;

	temp = (char *)malloc(sizeof(char) * 1);
	temp[0] = 0;
	return (temp);
}

int		str_cat(char *dest, char *src, int index)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[index + i] = src[i];
		i++;
	}
	return (index + i);
}

int		get_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		row;
	int		m_size;
	char	*result;
	int		next;
	int		point;

	if (size == 0)
		return (blank_pointer());
	row = 0;
	m_size = (size - 1) * get_size(sep);
	while (row < size)
		m_size += get_size(strs[row++]);
	if ((result = (char *)malloc(sizeof(char) * (m_size + 1))) == NULL)
		return (blank_pointer());
	row = 0;
	point = 0;
	while (row < size)
	{
		next = str_cat(result, strs[row], point);
		if (row != size - 1)
			point = str_cat(result, sep, next);
		row++;
	}
	result[m_size] = '\0';
	return (result);
}
