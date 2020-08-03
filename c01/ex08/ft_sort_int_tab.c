void	swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	size--;
	while (size != 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i + 1] < tab[i])
			swap(&tab[i], &tab[i + 1]);
			i++;
		}
		size--;
	}
}