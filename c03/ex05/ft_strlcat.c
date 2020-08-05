/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyeongbinjo <kyeongbinjo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 20:43:09 by kyeongbinjo       #+#    #+#             */
/*   Updated: 2020/08/05 21:47:44 by kyeongbinjo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int size_dest;

	size_dest = 0;
	while (*dest != '\0')
	{
		dest++;
		size_dest++;
	}
	if (size == 0 || dst != '\0')
	while (*src != '\0' && size != 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	

}