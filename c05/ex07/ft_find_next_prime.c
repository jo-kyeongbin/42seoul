/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 09:59:41 by kjo               #+#    #+#             */
/*   Updated: 2020/08/12 10:50:02 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;
	int count;

	if (nb <= 1)
		return (2);
	else
	{
		i = nb;
		count = 0;
		while (i > 0)
		{
			if (nb % i == 0)
				count++;
			if (count >= 3)
				return (ft_find_next_prime(nb + 1));
			i--;
		}
		return (nb);
	}
 }