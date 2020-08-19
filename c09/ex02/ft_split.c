/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 14:14:24 by kjo               #+#    #+#             */
/*   Updated: 2020/08/18 15:43:05 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(char *a)
{
	int size;

	size = 0;
	while (*a)
	{
		size++;
		a++;
	}
	return (size);
}

char	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int		count_word(char *str, char *charset)
{
	int count;
	int key;

	count = 0;
	key = 0;
	while (*str)
	{
		if (is_charset(*str, charset))
		{
			key = 0;
			str++;
			continue;
		}
		if (!is_charset(*str, charset) && key == 0)
		{
			count++;
			key = 1;
		}
		str++;
	}
	return (count);
}

char	*str_dup(char *start, char *end)
{
	char *copy;
	char *init;

	copy = (char*)malloc(sizeof(char) * (end - start + 1));
	init = copy;
	while (start != end)
	{
		*copy = *start;
		start++;
		copy++;
	}
	*copy = 0;
	copy = init;
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	int		key;
	int		i;
	char	*start_word;
	char	**result;

	result = (char **)malloc(sizeof(char *) * count_word(str, charset) + 1);
	result[count_word(str, charset)] = 0;
	i = 0;
	while (*str)
	{
		key = 0;
		while (!is_charset(*str, charset) && *str)
		{
			if (key == 0)
			{	
				start_word = str;
				key = 1;
			}
			str++;
		}
		if (key == 1)
			result[i++] = str_dup(start_word, str);
		if (*str)
			str++;
	}
	return (result);
}