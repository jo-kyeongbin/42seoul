/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyeongbinjo <kyeongbinjo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 16:57:51 by kyeongbinjo       #+#    #+#             */
/*   Updated: 2020/08/05 17:12:01 by kyeongbinjo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n != 0)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		n--;
		s1++;
		s2++;
	}
	if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
		return (0);
	else if (*s1 == '\0')
		return (-1);
	else
		return (1);
}