/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:52:24 by sochoi            #+#    #+#             */
/*   Updated: 2020/08/08 19:43:57 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		search(int row, char h, char **map, char *input);

int		input_exception(int argc, char *argv[], char *input);

char	**init_map(void)
{
	int		i;
	int		j;
	char	**map;
	char	*line;

	map = (char**)malloc(sizeof(char*) * 5);
	i = 0;
	while (i < 4)
	{
		line = map[i];
		line = (char*)malloc(sizeof(char) * 5);
		j = 0;
		while (j < 4)
		{
			line[j] = '0';
			j++;
		}
		line[j] = 0;
		map[i] = line;
		i++;
	}
	map[i] = 0;
	return (map);
}

void	find_1st_4(char **map, char *input)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (input[i] == '1')
			break ;
		i++;
	}
	if (i < 4)
		map[0][i] = '4';
}

void	print_map(char **map)
{
	int		i;
	int		j;

	i = 0;
	while (map[i] != 0)
	{
		j = 0;
		while (map[i][j] != 0)
		{
			if (j > 0)
				write(1, " ", 1);
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	char	input[16];
	char	**map;

	if (input_exception(argc, argv, input) == -1)
		return (0);
	map = init_map();
	find_1st_4(map, input);
	if (search(0, '4', map, input) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_map(map);
}
