/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 09:47:50 by kjo               #+#    #+#             */
/*   Updated: 2020/08/13 10:05:05 by kjo              ###   ########.fr       */
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
	int size;

	if (argc < 1)
		write(1, "Error!\n", 7);
	size = length(argv[0]);
	write(1, argv[0], size);
	write(1, "\n", 1);
	return (0);
}
