/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:46:06 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 11:32:27 by ji-song          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/finder.h"
#include "../includes/map.h"

int	**build_finder(int row, int col)
{
	int	i;
	int	**finder_map;

	i = 0;
	finder_map = (int **) malloc(row * sizeof(int *));
	if (finder_map == NULL)
		return (NULL);
	while (i < row)
	{
		finder_map[i] = (int *) malloc(col * sizeof(int));
		if (finder_map[i] == NULL)
			return (NULL);
		i++;
	}
	return (finder_map);
}

int	find_max_len(const t_map *ori)
{
	int	r;
	int	c;
	int	max_len;
	int	**finder;

	finder = build_finder(ori -> row, ori->col);
	if (finder == NULL)
		return (-1);
	max_len = 0;
	r = 0;
	while (r < ori->row)
	{
		c = 0;
		while (c < ori->col)
		{
			fill_finder(ori, finder, r, c);
			if (finder[r][c] > max_len)
				max_len = finder[r][c];
			c++;
		}
		r++;
	}
	free_finder(ori, finder);
	return (max_len);
}

t_pos	find_max_pos(const t_map *ori, int max_len)
{
	int	**finder;
	int	r;
	int	c;

	r = 0;
	finder = build_finder(ori -> row, ori -> col);
	if (finder == NULL)
		return ((t_pos){-1, -1});
	while (r < ori->row)
	{
		c = 0;
		while (c < ori->col)
		{
			fill_finder(ori, finder, r, c);
			if (finder[r][c] == max_len)
			{
				free_finder(ori, finder);
				return ((t_pos){r, c});
			}
			c++;
		}
		r++;
	}
	return ((t_pos){-1, -1});
}
