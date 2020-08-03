int		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index++]!='\0');
	return (index-1);
}