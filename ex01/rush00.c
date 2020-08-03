/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 00:57:32 by kjo               #+#    #+#             */
/*   Updated: 2020/08/02 01:18:54 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int, int);
void	print_circle(void);
void	print_hyphen(void);
void	print_pipe(void);
void	print_jump(void);
void	ft_putchar(char c);

void	rush (int a, int b){
	int row;
	row = 0;
	int col;
	col = 0;
	char next;
	next = '\n';
	
	while(!(row == b && col == a)){
		if((row == 0 && col == 0) || (row != 0 && row == b-1 && col == a-1) ||
				(row == 0 && col==a-1) || (row == b-1 && col == 0)){
			print_circle();
		}
	
		else if((row == 0 || row == b-1) && (col >= 1 && col <= a-2)){
			print_hyphen();
		}

		else if((row >= 1 && row <= b-2) && (col == 0 || col == a-1)){
			print_pipe();
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

void	print_circle(void){
	char s;
	s = 'o';
	ft_putchar(s);
}

void	print_hyphen(void){
	char s;
	s = '-';
	ft_putchar(s);
}

void	print_pipe(void){
	char s;
	s = '|';
	ft_putchar(s);
}

void	print_jump(void){
	char s;
	s = ' ';
	ft_putchar(s);
}

