/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 12:21:46 by jko               #+#    #+#             */
/*   Updated: 2020/08/06 22:39:26 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	unsigned int n = 16;
	int i = 0;
	char *src = "abcdefghijkdd";
	char dest[20] = "0123456789";
	char dest2[20] = "0123456789";
//	dest2 = ft_strncpy(dest, src, n);
//	write(1, dest, n);
//	write(1, dest2, n);
	//printf("%s\n", ft_strncpy(dest, src, n));
	//printf("%s\n", strncpy(dest2, src, n));
	//printf("\n");
	char *c = "";
	char *d = "";
	c = ft_strncpy(dest, src, n);
	int k =0;
	while (i < 100)
	{
		if (c[i] != '\0')
		{
			printf("%c",c[i]);
			i++;
		}
		else
		{
			printf("앙(%d) ",k++);
			i++;
		}
	}
	printf("\n\n");
	i = 0;
	k =0;
	d = strncpy(dest2, src, n);
	while (i < 100)
	{
		if (d[i] != '\0')
		{
			printf("%c",d[i]);
			i++;
		}
		else
		{
			printf("앙(%d) ",k++);
			i++;
		}
	}
//dest2 = strncpy(dest, src, n);
//write(1, dest, n);
//write(1, dest2, n);
	/*n = 14;
 	printf("%s\n", ft_strncpy(dest, src, n));
	printf("%s\n", strncpy(dest2, src, n));
	printf("\n");

	n = 16;
	printf("%s\n", ft_strncpy(dest, src, n));
	printf("%s\n", strncpy(dest2, src, n));
	printf("\n");*/
	return (0);
}
