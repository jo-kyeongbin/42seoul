/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyeongbinjo <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 23:44:28 by kyeongbin         #+#    #+#             */
/*   Updated: 2020/08/05 00:25:19 by kyeongbin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_word(char *str, int i)
{	
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i-1] == ' ') || (i == 0)) && 
		(str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if (!(is_word(str, i-1)) && (str[i] >= 'a' && str[i] <= 'z' ))
			str[i] = str[i] - 32;
		else if ((i != 0) && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
