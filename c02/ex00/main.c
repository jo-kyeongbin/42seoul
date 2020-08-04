#include "ft_strcpy.c"
#include <stdio.h>

void print_array(char *a)
{
	int i = 0;
	while(a[i] != '\0')
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n");
}

int main()
{
	char a[13] = "hello world!";
	char b[13] = "hi hello hi!";
	char *c;

	c = ft_strcpy(a, b);
	print_array(a);
	print_array(b);
	print_array(c);
}
