/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ji-song <ji-song@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:33:04 by ji-song           #+#    #+#             */
/*   Updated: 2022/05/05 11:33:08 by ji-song          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <stdlib.h>

int	possible_around(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b < a && b <= c)
		return (b);
	else if (c < a && c < b)
		return (c);
	return (c);
}

void	free_finder(const t_map *ori, int **finder)
{
	int	i;

	i = 0;
	while (i < ori->row)
		free(finder[i++]);
	free(finder);
}

void	fill_finder(const t_map *ori, int **finder, int r, int c)
{
	if (ori->map[r][c] == ori->ch[1])
		finder[r][c] = 0;
	else if (r == 0 || c == 0)
		finder[r][c] = 1;
	else
	{
		finder[r][c] = \
			possible_around(\
			finder[r - 1][c], finder[r][c - 1], finder[r - 1][c - 1]) + 1;
	}
}
