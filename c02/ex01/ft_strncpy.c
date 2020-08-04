/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyeongbinjo <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:41:13 by kyeongbin         #+#    #+#             */
/*   Updated: 2020/08/04 21:49:02 by kyeongbin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{	
			dest[i] = src[i];
			i++;
		}
		else
		{	dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
