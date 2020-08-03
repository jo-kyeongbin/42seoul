void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp[size];
	int max;
	
	max = size;
	i = 0;
	while((size--) != 0)
	{
		temp[i] = tab[size];
		i++;
	}
	i = 0;
	while(i != max)
	{
		tab[i] = temp[i];
		i++;
	}
}