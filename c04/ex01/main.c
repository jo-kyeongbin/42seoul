#include <string.h>
#include <unistd.h>
void	ft_putstr(char *);

int main()
{
	char *a = "hellow world!";
	char k[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char next = '\n';
	char *b = "";
	char *c = "a";
	ft_putstr(a);
	write(1,&next,1);
	ft_putstr(b);
	write(1,&next,1);
	ft_putstr(c);
	write(1,&next,1);
	ft_putstr(k);
	write(1,&next,1);
}