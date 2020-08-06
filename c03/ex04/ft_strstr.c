/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 18:47:45 by kyeongbinjo       #+#    #+#             */
/*   Updated: 2020/08/06 13:17:35 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*find_to_text(char *str, char *to_find, char *init_point)
{
	int		key;
	char	*ptr;

	key = 0;
	while (*str != '\0')
	{
		while (*str == *to_find && (*to_find != '\0'))
		{
			if (key == 0)
			{
				ptr = str;
				key = 1;
			}
			str++;
			to_find++;
		}
		if (*to_find == '\0')
			return (ptr);
		key = 0;
		to_find = init_point;
		str++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char *temp;
	char *init_point;

	init_point = to_find;
	if (*to_find == '\0')
		return (str);
	temp = find_to_text(str, to_find, init_point);
	return (temp);
}
