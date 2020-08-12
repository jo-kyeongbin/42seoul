#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int main()
{
	int result = ft_recursive_power(5,3);
	int result1 = ft_recursive_power(5,0);
	int result2 = ft_recursive_power(0,0);
	int result3 = ft_recursive_power(0,1);
	int result4 = ft_recursive_power(5,1);
	int result5 = ft_recursive_power(5,-1);
	int result6 = ft_recursive_power(-5,2);
	int result7 = ft_recursive_power(-5,3);

	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",result,result1,result2,result3,result4,result5,result6,result7);
}