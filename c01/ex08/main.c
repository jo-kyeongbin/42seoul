#include "ft_sort_int_tab.c"
#include <stdio.h>

int main()
{
	int a[10] = {9,8,41,6,5,30,4,3,9,1};
	ft_sort_int_tab(a,10);
	int i = 0;
	while(i<10)
	{
		printf("%d, ",a[i]);
		i++;
	}
}