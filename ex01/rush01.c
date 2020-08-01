/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyeongbinjo <kyeongbinjo@student..fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 16:21:58 by kjo               #+#    #+#             */
/*   Updated: 2020/08/02 01:59:46 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int, int);
void	print_slash(void);
void	print_star(void);
void	print_back_s(void);
void	print_jump(void);
void	ft_putchar(char);

void	rush (int a, int b){
	int row;
	row = 0;
	int col;
	col = 0;
	char next;
	next = '\n';
	
	while(!(row == b && col == a)){
		if((row == 0 && col == 0) || (row != 0 && col != 0 && row == b-1 && col == a-1)){
			print_slash();
		}
	
		else if(((row == 0 || row == b-1) && (col >= 1 && col <= a-2)) ||
			((row >= 1 && row <= b-2) && (col == 0 || col == a-1))){
			print_star();
		}

		else if((row == 0 && col == a-1) || (row == b-1 && col == 0)){
			print_back_s();
		}

		else if((row >= 1 && row < b-1) && (col >= 1 && col < a-1)){
			print_jump();
		}

		else if(col==a){
			write(1,&next,1);
			col = 0;
			row++;
			col--;
		}
	col++;
	}
}

void	print_slash(void){
	char s;
	s = '/';
	ft_putchar(s);
}

void print_star(void){
	char s;
	s = '*';
	ft_putchar(s);
}

void print_back_s(void){
	char s;
	s = '\\';
	ft_putchar(s);
}

void print_jump(void){
	char s;
	s = ' ';
	ft_putchar(s);
}
