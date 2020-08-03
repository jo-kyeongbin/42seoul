#include <unistd.h>

void print(int num)
{	
	char a[2];

	a[0] = num / 10 + 48;
	a[1] = num % 10 + 48;
	write(1, &a, 2);
}

void ft_print_comb2(void)
{
	int 	num[2];
	char 	a[2];

	num[0] = 0;
	a[0] = ',';
	a[1] = ' ';
	while(num[0] <= 98)
	{
		num[1] = num[0] + 1;
		while(num[1] <= 99)
		{
			print(num[0]);
			write(1, &a[0], 1);
			print(num[1]);
			if (!(num[0] == 98 && num[1] == 99))
				write(1, &a, 2);
			num[1]++;
		}
		num[0]++;
	}
}

int main(){

ft_print_comb2();

}
