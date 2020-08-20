#include <stdlib.h>
#include <stdio.h>

void	funA(char *a)
{
	a = (char *)malloc(sizeof(char) * 2);
	a[0] = 'Q';
	a[1] = 'A';
	a[2] = 0;
	printf("result funA : %s\n",a);
}

void	funB(char **a)
{
	*a = (char *)malloc(sizeof(char) * 2);
	(*a)[0] = 'Q';
	(*a)[1] = 0;
}

int main()
{
	char *a;
	char *b;
	int i = 1;
	
	funB(&a);
	funB(&b);
	while (i < 17)
		a[i++] = 'A';
	a[i] = 0;
	printf("%p, %p\n",a,b);
	printf("funA : %s\n",a);
	printf("funB : %s\n",b);
}