#include <stdio.h>

void	ft_putnbr_base(int, char*);

int main()
{
	int nbr = 15;
	char *base = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base);
}