/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builder.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:06:30 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 11:20:23 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/builder.h"
#include "../includes/getter.h"
#include "../includes/checker.h"

void	fill_map(t_map **res, int data[3], char comp[3])
{
	(*res)->ch = (char *) malloc(3 * sizeof(char));
	(*res)->ch[0] = comp[0];
	(*res)->ch[1] = comp[1];
	(*res)->ch[2] = comp[2];
	(*res)->row = data[0];
	(*res)->col = data[1];
}

t_map	*build_map(char *data_)
{
	t_map	*res;
	char	**temp;
	int		i;
	int		data[3];
	char	comp[3];

	i = 1;
	res = (t_map *) malloc(sizeof(t_map));
	if (res == NULL || check_all(data_, data, comp) < 0)
		return (NULL);
	fill_map(&res, data, comp);
	temp = ft_split(data_, "\n");
	res->map = (char **) malloc (sizeof (char *) * (res->row));
	if (res->map == NULL)
		return (NULL);
	while (temp[i] != NULL)
	{
		res->map[i - 1] = ft_strdup(temp[i]);
		i++;
	}
	free_matrix(temp);
	return (res);
}

void	free_map(t_map *ori)
{
	int	r;

	r = 0;
	while (r < ori -> row)
		free(ori->map[r++]);
	free(ori->map);
	free(ori->ch);
	free(ori);
}
