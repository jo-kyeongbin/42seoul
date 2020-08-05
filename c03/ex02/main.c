#include <stdio.h>
char *ft_strcat(char*, char*);

int main()
{
	int i = 0;
	char a[20] = "Hellow ";
	char b[10] = "World!";
	char *c = ft_strcat(a,b);
	/*while(a[i] != '\0')
	{
		printf("%c",a[i]);
		i++;
	}
	i = 0;*/
	while(c[i] != '\0')
	{	
		printf("%c",c[i]);
		i++;
	}
}