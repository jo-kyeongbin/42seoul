/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 10:06:14 by kjo               #+#    #+#             */
/*   Updated: 2020/08/13 10:20:30 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		length(char *a)
{
	int i;

	i = 0;
	while (*a != '\0')
	{
		a++;
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	int i;
	int size;

	i = argc - 1;
	if (argc < 1)
		write(1, "Error!\n", 7);
	while (argv[i] && i >= 1)
	{
		size = length(argv[i]);
		write(1, argv[i], size);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
