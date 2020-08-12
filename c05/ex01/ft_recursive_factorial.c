/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:48:07 by kjo               #+#    #+#             */
/*   Updated: 2020/08/11 13:00:03 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0 | nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	else
	{
		result = result * ft_recursive_factorial(nb - 1);
		return (result);
	}
}
