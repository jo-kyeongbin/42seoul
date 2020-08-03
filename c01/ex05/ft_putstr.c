#include <unistd.h>

void	ft_putstr(char *str)
{
	int array_index;

	array_index = 0;
	while(str[array_index++] != '\0');
	write(1, str, (array_index-1));
}