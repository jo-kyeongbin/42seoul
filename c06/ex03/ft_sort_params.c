/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 10:06:14 by kjo               #+#    #+#             */
/*   Updated: 2020/08/13 11:34:56 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		cmp_str(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (!s1[i] && !s2[i])
		return (0);
	if (s1[i])
		return (1);
	return (-1);
}

void	print(char *a)
{
	int		size;
	char	*init;

	init = a;
	size = 0;
	while (*a != '\0')
	{
		a++;
		size++;
	}
	a = init;
	write(1, a, size);
	write(1, "\n", 1);
}

void	swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc < 1)
		write(1, "Error!\n", 7);
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (cmp_str(argv[i], argv[j]) > 0)
				swap(argv[i], argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (argv[i])
		print(argv[i++]);
	return (0);
}
