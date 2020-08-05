#include <stdio.h>

int ft_strncmp(char*, char*, unsigned int);

int main()
{
	char *a = "hello world!";
	char *b = "hello World!";

	printf("%d\n",ft_strncmp(a,b,5));
	printf("%d\n",ft_strncmp(a,b,7));
	printf("%d\n",ft_strncmp(b,a,10));
	printf("%d\n",ft_strncmp(a,b,13));
}