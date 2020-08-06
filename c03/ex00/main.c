/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:03:08 by jko               #+#    #+#             */
/*   Updated: 2020/08/06 16:55:42 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%d vs %d\n", ft_strcmp("abcd", "bcde"), strcmp("abcd", "bcde"));
	printf("%d vs %d\n", ft_strcmp("bcde", "ebcdef"), strcmp("bcde", "ebcdef"));
	printf("%d vs %d\n", ft_strcmp("abcd", "ebcdef"), strcmp("abcd", "ebcdef"));

	return (0);
}
