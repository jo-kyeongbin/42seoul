#include <stdio.h>
char *ft_strstr(char*, char*);

int main()
{
	int i = 0;
	char a[20] = "hello world!";
	char b[5] = "ell";
	char *k = "";
	char *p = "k";
	char *c = ft_strstr(a,p);
	if(c == NULL)
		printf("앙");
}