/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 00:35:10 by kjo               #+#    #+#             */
/*   Updated: 2020/08/21 00:56:10 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int dsc;
	int asc;

	if (length < 2)
		return (1);
	dsc = 0;
	asc = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			dsc++;
		if (f(tab[i], tab[i + 1]) <= 0)
			asc++;
		i++;
	}
	if (dsc == length - 1 || asc == length - 1)
		return (1);
	return (0);
}