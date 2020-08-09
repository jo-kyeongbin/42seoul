/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 15:54:08 by sochoi            #+#    #+#             */
/*   Updated: 2020/08/09 16:02:47 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCH_H
# define SEARCH_H

char	*make_view(char **map, int n);

int		validate_view(char *view, char n);

int		validate(char **map, char *input);

int		search_exception(int col, char h, int row, char **map);

int		search(int row, char h, char **map, char *input);

#endif
