#include <unistd.h>

void	end_capitalizer(char* s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'A' && s[i] <= 'Z' && s[i + 1] != ' '
			&& s[i + 1] != '\t' && s[i + 1] != '\0')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i + 1] == ' '
			|| s[i + 1] == '\t' || s[i + 1] == '\0'))
			s[i] -= 32;
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char** av)
{
	int i = 1;
	if (ac >= 2)
	{
		while (ac > i)
		{
			end_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}