/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 23:01:00 by kjo               #+#    #+#             */
/*   Updated: 2020/08/20 23:07:07 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int *ft_map(int *tab, int length, int(*f)(int))
 {
	 int i;

	 i = 0;
	 while (i < length)
	 {
		 tab[i] = f(tab[i]);
		 i++;
	 }
	 return (tab);
 }