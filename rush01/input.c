/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 19:40:33 by sochoi            #+#    #+#             */
/*   Updated: 2020/08/08 19:41:13 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		get_input(char *input, char *str)
{
	int		cursor;
	char	c;

	cursor = 0;
	while (cursor < 31)
	{
		c = str[cursor];
		if (c == 0)
			return (-1);
		if (cursor % 2 == 0)
		{
			if ('1' > c || c > '4')
				return (-1);
			input[cursor / 2] = c;
		}
		else
		{
			if (c != ' ')
				return (-1);
		}
		cursor++;
	}
	return (cursor);
}

int		input_exception(int argc, char *argv[], char *input)
{
	int		cursor;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	if (get_input(input, argv[1]) != 31)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	cursor = 0;
	while (cursor < 4)
	{
		if (input[cursor] == '4')
			return (1);
		cursor++;
	}
	return (0);
}
