#include <stdio.h>

 int ft_recursive_factorial(int nb);

 int main()
 {
	int result = ft_recursive_factorial(5);
	int result1 = ft_recursive_factorial(0);
	int result2 = ft_recursive_factorial(-1);

	printf("5!:%d\n0!:%d\n-1!:%d\n",result,result1,result2);

 }