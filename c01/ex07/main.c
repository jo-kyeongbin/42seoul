#include "ft_rev_int_tab.c"
#include <stdio.h>

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	ft_rev_int_tab(a, 9);
	int i = 0;
	while(i != 9)
	printf("%d, ",a[i++]);
}
