#include <stdio.h>
char	*ft_strdup(char *src);

int main()
{
	char *a;
	char b[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	a = ft_strdup(b);
	if (a[5]=='\0')
		printf("%s\n",a);
}