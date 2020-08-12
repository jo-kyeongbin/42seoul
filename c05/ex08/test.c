#include <stdio.h>

int main()
{
	int test[2][2];
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{
			printf("%d",test[i][j]);
			j++;
		}
		i++;
	}
}