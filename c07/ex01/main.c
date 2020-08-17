#include <stdio.h>
int		*ft_range(int min, int max);

int main()
{
	int *a = ft_range(-5,-1);
	for (int i = 0 ; i < 4; i++)
		printf("%d, ",a[i]);
}