/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 00:54:29 by kjo               #+#    #+#             */
/*   Updated: 2020/08/02 02:14:01 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "rush04.c"
void	rush(int a, int b);


int		main()
{		
	printf("(5,3)\n");
	rush(5,3);
	printf("\n");
	printf("(5,1)\n");
	rush(5,1);
	printf("\n");
	printf("(1,1)\n");
	rush(1,1);
	printf("\n");
	printf("(1,5)\n");
	rush(1,5);
	printf("\n");
	printf("(4,4)\n");
	rush(4,4);
	printf("\n");

	return 0;
}


