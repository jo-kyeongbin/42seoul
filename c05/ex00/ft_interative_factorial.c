/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:44:43 by kjo               #+#    #+#             */
/*   Updated: 2020/08/11 12:44:53 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_interative_factorial(int nb)
{
	int temp;

	temp = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 | nb == 1)
		return (1);
	else
	{
		while (nb > 0)
		{
			temp *= nb;
			nb--;
		}
		return (temp);
	}
}
