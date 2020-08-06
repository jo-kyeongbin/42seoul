/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 20:43:09 by kyeongbinjo       #+#    #+#             */
/*   Updated: 2020/08/06 13:16:31 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	size_is(char *array)
{
	char			*init;
	unsigned int	size;

	init = array;
	size = 0;
	while (*array != '\0')
	{
		array++;
		size++;
	}
	array = init;
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	int				i;
	int				j;

	size_dest = size_is(dest);
	size_src = size_is(src);
	i = size_dest;
	j = 0;
	while (j < (int)(size - size_dest - 1) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size_dest > size)
		return (size + size_src);
	else
		return (size_src + size_dest);
}
