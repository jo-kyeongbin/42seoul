#include <stdio.h>
#include <stdlib.h>
 int ft_ultimate_range(int **range, int min, int max);

 int main()
 {
	 int **temp;
	 temp = (int **)malloc(sizeof(int*)*4);
	 int b = ft_ultimate_range(temp, -5, -1);
	 printf("return : %d\n", b);
	 for (int i = 0; i < 4; i++)
	 	printf("%d, ", (*temp)[i]);
 }
