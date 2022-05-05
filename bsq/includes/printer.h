/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:12:06 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/04 13:12:55 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTER_H
# define PRINTER_H
# include "map.h"
# include "finder.h"
# include <unistd.h>

int		is_in_answer(t_pos cursor, const int size, const t_pos pos);
void	print_result(const t_map *map_data);
#endif
