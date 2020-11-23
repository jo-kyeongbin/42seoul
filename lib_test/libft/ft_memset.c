/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 17:16:55 by kjo               #+#    #+#             */
/*   Updated: 2020/11/22 17:17:00 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*addr;
	unsigned char	temp;

	i = 0;
	addr = (unsigned char *)b;
	temp = (unsigned char)c;
	while (i < len)
	{
		addr[i] = temp;
		i++;
	}
	return (b);
}
