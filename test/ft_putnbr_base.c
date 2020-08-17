/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hson <hson@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 20:02:38 by hson              #+#    #+#             */
/*   Updated: 2020/08/17 22:42:38 by hson             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_valid(char *base, int cnt)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (cnt < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			cnt;
	long long	temp;
	char		nbr_c[256];

	i = 0;
	cnt = ft_len(base);
	if (check_valid(base, cnt) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		temp = nbr * -1;
	}
	else
		temp = nbr;
	if (temp == 0)
		ft_putchar(base[0]);
	while (temp > 0)
	{
		nbr_c[i++] = base[temp % cnt];
		temp /= cnt;
	}
	while (--i >= 0)
		ft_putchar(nbr_c[i]);
}
