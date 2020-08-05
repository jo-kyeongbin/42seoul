#include <stdio.h>
char *ft_strncat(char*, char*, unsigned int);

int main()
{
	int i = 0;
	char a[25] = "hello ";
	char b[18] = "world! Everybody!";
	char *c = ft_strncat(a,b,17);
	while(c[i] != '\0')
	{
		printf("%c",c[i]);
		i++;
	}
	i = 0;
	printf("\n\n");
	while(a[i] != '\0')
	{
		printf("%c",a[i]);
		i++;
	}
	return 0;
}