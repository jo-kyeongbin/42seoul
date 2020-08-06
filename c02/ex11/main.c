/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42.seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:22:56 by jko               #+#    #+#             */
/*   Updated: 2020/08/06 15:46:14 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	printf("%s\n", "Coucou\ntu vas bien ?");
	ft_putstr_non_printable("Coucou\ttu vas bien ?");
	printf("\n\n");
	return (0);
}
