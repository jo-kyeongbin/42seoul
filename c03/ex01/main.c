/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:26:01 by jko               #+#    #+#             */
/*   Updated: 2020/08/06 17:09:19 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d vs %d\n", ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));
	printf("%d vs %d\n", ft_strncmp("def", "123", 3), strncmp("def4", "123", 3));
	printf("%d vs %d\n", ft_strncmp("abc", "zzxy4", 4), strncmp("abc", "zzxy4", 4));
	printf("%d vs %d\n", ft_strncmp("aaa", "aab", 3), strncmp("aaa", "aab", 3));
	printf("%d vs %d\n", ft_strncmp("aab", "aaa", 2), strncmp("aab", "aaa", 2));
	printf("%d vs %d\n", ft_strncmp("aaaa", "aca", 4), strncmp("aaaa", "aca", 4));
	printf("%d vs %d\n", ft_strncmp("", "", 1), strncmp("", "", 1));
	printf("%d vs %d\n", ft_strncmp("aaa", "aaaa", 4), strncmp("aaa", "aaaa", 4));
	printf("%d vs %d\n", ft_strncmp("aaa", "aa", 3), strncmp("aaa", "aa", 3));
	return (0);
}
