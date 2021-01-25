/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjo <kjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:07:08 by kjo               #+#    #+#             */
/*   Updated: 2021/01/25 19:49:16 by kjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					is_newline(char *remainder)
{
	int				i;

	i = 0;
	while (remainder[i])
	{
		if (remainder[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int					split_line(char **remainder, char **line, int cut_idx)
{
	char			*temp;
	int				len;

	(*remainder)[cut_idx] = '\0';
	*line = ft_strdup(*remainder);
	len = ft_strlen(*remainder + cut_idx + 1);
	if (len == 0)
	{
		free(*remainder);
		*remainder = 0;
		return (1);
	}
	temp = ft_strdup(*remainder + cut_idx + 1);
	free(*remainder);
	*remainder = temp;
	return (1);
}

int					return_all(char **remainder, char **line, int read_size)
{
	int				cut_idx;

	if (read_size < 0)
		return (-1);
	if (*remainder && (cut_idx = is_newline(*remainder)) >= 0)
		return (split_line(remainder, line, cut_idx));
	else if (*remainder)
	{
		*line = *remainder;
		*remainder = 0;
		return (0);
	}
	*line = ft_strdup("");
	return (0);
}

int					get_next_line(int fd, char **line)
{
	static t_info	info;
	int				read_size;
	int				cut_idx;

	if ((fd >= OPEN_MAX) || (fd < 0) || (line == 0) || (BUFFER_SIZE <= 0))
		return (-1);
	while ((read_size = read(fd, info.buf, BUFFER_SIZE)) > 0)
	{
		info.buf[read_size] = '\0';
		info.remainder[fd] = ft_strjoin(info.remainder[fd], info.buf);
		if ((cut_idx = is_newline(info.remainder[fd])) >= 0)
			return (split_line(&info.remainder[fd], line, cut_idx));
	}
	return (return_all(&info.remainder[fd], line, read_size));
}
