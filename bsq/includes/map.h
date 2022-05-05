/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:14:36 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/04 14:04:34 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct s_map{
	char	**map;
	int		row;
	int		col;
	char	*ch;
	int		pos;
}	t_map;

typedef struct s_pos{
	int	row;
	int	col;
}	t_pos;
#endif
