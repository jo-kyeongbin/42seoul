#include <unistd.h>

void print(char *number, int size)
{
	char a[2];
	int temp;
	
	temp = 10 - size;
	a[0] = ',';
	a[1] = ' ';
	write(1, number, size);
	if (!(number[size - 1] == '9' && number[0] == (temp + '0')))
		write(1, a, 2);
}

void combination(int index, char *number, int size)
{
	int i;

	if (size == index)
	{
		print(number, size);
	}
	else
	{
		if (index == 0)
			i = 0;
		else
			i = number[index - 1] - 48 + 1;
		while (i < 10)
		{
			number[index] = i + '0';
			combination(index + 1, number, size);
			i++;
		}	
	}
}

void	ft_print_combn(int n)
{
	char number[n];
	
	combination(0, number, n);
 }