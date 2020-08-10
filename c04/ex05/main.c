#include <stdio.h>

int		ft_atoi_base(char *, char *);

int		main()
{
	char *base = "0123456789ABCDEF";
	char *str = "	++--+DAADkkkk";
	int result = ft_atoi_base(str, base);
	printf("result : %d\n", result);
}