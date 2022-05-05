/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:38:56 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 11:33:33 by ji-song          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printer.h"

int	is_in_answer(t_pos cursor, const int size, const t_pos pos)
{
	if ((pos.row - size + 1) <= cursor.row && cursor.row <= pos.row
		&& (pos.col - size + 1) <= cursor.col && cursor.col <= pos.col)
		return (1);
	return (0);
}

void	print_result(const t_map *map_data)
{
	int		max_count;
	t_pos	pos;
	t_pos	cursor;
	int		r;
	int		c;

	r = 0;
	max_count = find_max_len(map_data);
	pos = find_max_pos(map_data, max_count);
	while (r < map_data->row)
	{
		c = 0;
		while (map_data->map[r][c] != '\0')
		{
			cursor = (t_pos){r, c};
			if (is_in_answer(cursor, max_count, pos))
				write(1, &map_data -> ch[2], 1);
			else
				write(1, &map_data->map[r][c], 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}
