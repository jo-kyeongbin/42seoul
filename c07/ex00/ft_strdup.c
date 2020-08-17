/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 14:31:44 by kjo               #+#    #+#             */
/*   Updated: 2020/08/16 14:56:06 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*result;

	size = 0;
	while (src[size] != '\0')
		size++;
	result = (char *)malloc(sizeof(char) * size);
	size = -1;
	while (src[++size] != '\0')
		result[size] = src[size];
	result[size] = '\0';
	return (result);
}
