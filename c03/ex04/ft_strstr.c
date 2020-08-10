/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 18:47:45 by kyeongbinjo       #+#    #+#             */
/*   Updated: 2020/08/10 14:41:52 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*find_to_text(char *str, char *to_find, char *find_init, char *ptr)
{
	int		key;
	char	*str_save;

	key = 0;
	while (*str != '\0')
	{
		while (*str == *to_find && (*to_find != '\0'))
		{
			str_save = str;
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
		to_find = find_init;
		str = str_save;
		str++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char *temp;
	char *find_init;
	char *ptr;

	ptr = 0;
	find_init = to_find;
	if (*to_find == '\0')
		return (str);
	temp = find_to_text(str, to_find, find_init, ptr);
	return (temp);
}
