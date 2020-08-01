/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 16:21:58 by kjo               #+#    #+#             */
/*   Updated: 2020/08/01 19:49:48 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	rush(int, int);
void	print_slash(void);
void	print_star(void);
void	print_back_s(void);
void	print_jump(void);

int main(void){
	printf("1,5\n");
	rush(1,5);	
	printf("1,1\n");
	rush(1,1);
	printf("4,4\n");
	rush(4,4);
	printf("5,1\n");
	rush(5,1);
	return 0;
}

void rush (int a, int b){
	int row = 0;
	int col = 0;
	char next = '\n';
	
	while(!(row == b && col == a)){
	if((row == 0 && col == 0) || (row != 0 && row == b-1 && col == a-1)){
		print_slash();
		//printf("slash:%d, %d, %d, %d\n",row,col,a,b);
	}
	
	else if(((row == 0 || row == b-1) && (col >= 1 && col <= a-2)) ||
		((row >= 1 && row <= b-2) && (col == 0 || col == a-1))){
		print_star();
		//printf("star:%d, %d, %d, %d\n",row,col,a,b);
	}

	else if((row == 0 && col == a-1) || (row == b-1 && col == 0)){
		print_back_s();
		//printf("back:%d, %d, %d, %d\n",row,col,a,b);
	}

	else if((row >= 1 && row < b-1) && (col >= 1 && col < a-1)){
		print_jump();
		//printf("jump:%d, %d, %d, %d\n",row,col,a,b);
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

void print_slash(void){
	char s = '/';
	write(1,&s,1);
}

void print_star(void){
	char s = '*';
	write(1,&s,1);
}

void print_back_s(void){
	char s = '\\';
	write(1,&s,1);
}

void print_jump(void){
	char s = ' ';
	write(1,&s,1);
}

