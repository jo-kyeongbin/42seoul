/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 20:33:32 by kjo               #+#    #+#             */
/*   Updated: 2021/01/17 20:33:33 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

typedef struct	s_info
{
	char	buf[BUFFER_SIZE + 1];
	char	*remainder[OPEN_MAX];
}				t_info;

int				get_next_line(int fd, char **line);

size_t			ft_strlen(const char *s);
char			*ft_strchr(char *str, int c);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif
