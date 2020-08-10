#include <stdio.h>
#include <string.h>
int	ft_strlen(char *);
int main()
{
	char *c = "hellow!";
	char *b = "\0";
	char *d = "";
	char *a = "a";

	printf("%lu, %d\n",strlen(c),ft_strlen(c));
	printf("%s\n",c);
	printf("%lu, %d\n",strlen(b),ft_strlen(b));
	printf("%lu, %d\n",strlen(d),ft_strlen(d));
	printf("%lu, %d\n",strlen(a),ft_strlen(a));
}