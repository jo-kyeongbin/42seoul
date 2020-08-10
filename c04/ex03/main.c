#include <stdio.h>
int		ft_atoi(char *str);

int main(int argc, char **argv)
{
	int result;
	if (argc != 2)
		printf("agr error\n");
	result = ft_atoi(argv[1]);
	printf("result = %d\n",result);
}