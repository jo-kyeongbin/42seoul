#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

#include <stdlib.h>

void	print_st(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	print_size(int nb)
{
	char	temp[10];
	int		i;

	i = 0;
	while (nb / 10)
	{
		temp[i++] = nb % 10 + '0';
		nb /= 10;
	}
	temp[i] = nb % 10 + '0';
	while (i >= 0)
		write(1, &temp[i--], 1);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		print_st(par[i].str);
		print_size(par[i].size);
		print_st(par[i].copy);
		i++;
	}
}

int	main(void)
{
	int ac = 3;
	char **av = (char **)malloc(sizeof(char *) * ac);
	av[0] = "123456789";
	av[1] = "abcdefghij";
	av[2] = "a1s2d3f4";
	ft_show_tab(ft_strs_to_tab(ac, av));
	return (0);
}
