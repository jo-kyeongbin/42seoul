/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:28:38 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/18 16:03:42 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check_base(char *base);
int		ft_check_char(char c, char *base);
int		ft_atoi_base(char *str, char *base);
void	ft_malloc_num(long *num, char **num_cvt);

char	*ft_strcat(char *dest, char ch)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = ch;
	dest[i + 1] = '\0';
	return (dest);
}

char	*ft_itoa_base(long num, char *base, char *num_cvt)
{
	int len;

	len = ft_strlen(base);
	if (num < len)
		num_cvt = ft_strcat(num_cvt, base[num]);
	else
	{
		num_cvt = ft_itoa_base(num / len, base, num_cvt);
		num_cvt = ft_itoa_base(num % len, base, num_cvt);
	}
	return (num_cvt);
}

char	*ft_num_cvt(int num, char *base)
{
	long	num_temp;
	char	*num_cvt;

	num_temp = (long)num;
	ft_malloc_num(&num_temp, &num_cvt);
	num_cvt = ft_itoa_base(num_temp, base, num_cvt);
	return (num_cvt);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*num_cvt;

	if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	num_cvt = ft_num_cvt(num, base_to);
	return (num_cvt);
}
