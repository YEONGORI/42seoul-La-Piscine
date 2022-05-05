/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:13:10 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/04 13:13:44 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FINDER_H
# define FINDER_H
# include "map.h"
# include <stdlib.h>

int		possible_around(int a, int b, int c);
int		**build_finder_map(int row, int col);
int		find_max_len(const t_map *ori);
t_pos	find_max_pos(const t_map *ori, int max_len);
void	fill_finder(const t_map *ori, int **finder, int r, int c);
void	free_finder(const t_map *ori, int **finder);
#endif
