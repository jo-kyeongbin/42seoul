/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:17:16 by kjo               #+#    #+#             */
/*   Updated: 2020/11/22 18:21:46 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	c2;

	c2 = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c2)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == c2)
		return ((char *)s + i);
	return (0);
}
