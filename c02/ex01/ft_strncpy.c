/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:41:13 by kyeongbin         #+#    #+#             */
/*   Updated: 2020/08/06 21:24:16 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				key;

	i = 0;
	key = 0;
	while (i < n)
	{
		if (src[i] != '\0' && key == 0)
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			key = 1;
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
