/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:23:10 by jko               #+#    #+#             */
/*   Updated: 2020/08/06 22:45:24 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char *dest = (char *) malloc(sizeof(char) * 20);
	int i = 0;
	char dest1[100] = "1234567891011121314151617181920212223";
	char dest2[100] = "1234567891011121314151617181920212223";
	char t[] = "abcdefghizzzsdfdfasdfadfasdfasdfasd!sdfasdf";
	ft_strlcpy(dest1, t, 35);
	int k =0;
	while (i < 100)
	{
		if (dest1[i] != '\0')
		{
			printf("%c",dest1[i]);
			i++;
		}
		else
		{
			printf("앙(%d) ",k++);
			i++;
		}
	}
	printf("\n\n");
	strlcpy(dest2, t, 35);
	k =0;
	i = 0;
	while (i < 100)
	{
		if (dest2[i] != '\0')
		{
			printf("%c",dest2[i]);
			i++;
		}
		else
		{
			printf("앙(%d) ",k++);
			i++;
		}
	}
	//printf("%s, %d vs %lu \n", t, ft_strlcpy(dest, t, 3), strlcpy(dest, t, 3));
	//strlcpy(dest, t, 3);
	//printf("%s",dest);
	char t1[] = {'1', 'A', 'b', '!', '\0', 'a', '\n'}; 
	//printf("%s, %d vs %lu \n", t1, ft_strlcpy(dest, t1, 7), strlcpy(dest, t1, 7));
	char t2[] = {'a', 'B', 'c', 'D', '\0'}; 
	//printf("%s, %d vs %lu \n", t2, ft_strlcpy(dest, t2, 7), strlcpy(dest, t2, 7));
	char t3[] = {'\0', 'a', 'b', 'c', '\0'}; 
	//printf("%s, %d vs %lu \n", t3, ft_strlcpy(dest, t3, 7), strlcpy(dest, t3, 7));
	char t4[] = {'1', '2', '3', '4', '5', '6', '7'}; 
	//printf("%s, %d vs %lu \n", t4, ft_strlcpy(dest, t4, 8), strlcpy(dest, t4, 8));

	char t5[] = "abc\0def\0";
	//printf("%s, %d vs %lu \n", t5, ft_strlcpy(dest, t5, 2), strlcpy(dest, t5, 2));
	return (0);
}
