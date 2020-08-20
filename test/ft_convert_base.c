/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:28:38 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/20 19:52:32 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(char *str);
int		check_base(char *base);
int		check_char(char c, char *base);
int		atoi_base(char *str, char *base);
void	malloc_num(long *num, char **num_cvt);

char	*str_cat(char *dest, char ch)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = ch;
	dest[i + 1] = '\0';
	return (dest);
}

char	*itoa_base(long num, char *base, char *num_cvt)
{
	int len;

	len = get_size(base);
	if (num < len)
		num_cvt = str_cat(num_cvt, base[num]);
	else
	{
		num_cvt = itoa_base(num / len, base, num_cvt);
		num_cvt = itoa_base(num % len, base, num_cvt);
	}
	return (num_cvt);
}

char	*num_cvt(int num, char *base)
{
	long	num_temp;
	char	*num_cvt;

	num_temp = (long)num;
	malloc_num(&num_temp, &num_cvt);
	num_cvt = itoa_base(num_temp, base, num_cvt);
	return (num_cvt);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (0);
	num = atoi_base(nbr, base_from);
	return (num_cvt(num, base_to));
}
