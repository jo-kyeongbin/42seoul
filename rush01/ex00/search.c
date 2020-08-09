/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 19:40:13 by sochoi            #+#    #+#             */
/*   Updated: 2020/08/09 16:01:22 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "search.h"

char	*make_view(char **map, int n)
{
	char	*view;
	int		i;

	view = (char*)malloc(sizeof(char) * 5);
	i = 0;
	while (i < 4)
	{
		if (n % 8 < 4 && n < 8)
			view[i] = map[i][n % 4];
		if (n % 8 >= 4 && n < 8)
			view[i] = map[3 - i][n % 4];
		if (n % 8 < 4 && n >= 8)
			view[i] = map[n % 4][i];
		if (n % 8 >= 4 && n >= 8)
			view[i] = map[n % 4][3 - i];
		i++;
	}
	return (view);
}

int		validate_view(char *view, char n)
{
	int		cursor;
	int		layers;
	int		highest;

	layers = 0;
	highest = 0;
	cursor = 0;
	while (cursor < 4)
	{
		if (view[cursor] > highest)
		{
			highest = view[cursor];
			layers++;
		}
		cursor++;
	}
	if (layers == n - '0')
		return (1);
	return (-1);
}

int		validate(char **map, char *input)
{
	int		cursor;
	char	*view;

	cursor = 0;
	while (cursor < 16)
	{
		view = make_view(map, cursor);
		if (validate_view(view, input[cursor]) != 1)
			return (-1);
		free(view);
		cursor++;
	}
	return (1);
}

int		search_exception(int col, char h, int row, char **map)
{
	int		cursor;

	if (map[row][col] > h)
		return (-1);
	cursor = 0;
	while (cursor < row)
	{
		if (map[cursor][col] == h)
			return (-1);
		cursor++;
	}
	return (1);
}

int		search(int row, char h, char **map, char *input)
{
	int		cur;

	if (h == '1' && row == 3)
		return (validate(map, input));
	row++;
	if (row == 4)
	{
		h--;
		row = 0;
	}
	cur = 0;
	while (cur < 4)
	{
		if (search_exception(cur, h, row, map) == -1)
		{
			cur++;
			continue;
		}
		map[row][cur] = h;
		if (search(row, h, map, input) == 1)
			return (1);
		map[row][cur] = '0';
		cur++;
	}
	return (0);
}
