/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyeongbinjo <kyeongbinjo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 01:39:58 by kyeongbinjo       #+#    #+#             */
/*   Updated: 2020/08/02 02:13:47 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int, int);
void	print_A(void);
void	print_B(void);
void	print_C(void);
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
		if((row == 0 && col == 0) || (row != 0 && row == b-1 && col != 0 && col == a-1)){
			print_A();
		}
	
		else if(((row == 0 || row == b-1) && (col >= 1 && col <= a-2)) ||
			((row >= 1 && row <= b-2) && (col == 0 || col == a-1))){
			print_B();
		}

		else if((row == 0 && col == a-1) || (row == b-1 && col == 0)){
			print_C();
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

void	print_A(void){
	char s;
	s = 'A';
	ft_putchar(s);
}

void print_B(void){
	char s;
	s = 'B';
	ft_putchar(s);
}

void print_C(void){
	char s;
	s = 'C';
	ft_putchar(s);
}

void print_jump(void){
	char s;
	s = ' ';
	ft_putchar(s);
}
