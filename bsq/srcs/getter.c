/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:43:16 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/04 22:07:53 by ji-song          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*get_comp(char *str)
{
	int		i;
	char	*comp;

	i = 0;
	comp = (char *) malloc(sizeof(char) * 4);
	if (comp == NULL)
		return (NULL);
	while (str[i] != '\n')
		i++;
	comp[3] = '\n';
	comp[2] = str[--i];
	comp[1] = str[--i];
	comp[0] = str[--i];
	return (comp);
}

int	get_n_row(char *str)
{
	int	i;
	int	cnt;
	int	n_row;

	i = 0;
	cnt = 0;
	n_row = 0;
	while (str[i] != '\n')
		i++;
	while (cnt < i - 3)
	{
		n_row = (n_row * 10) + (str[cnt] - '0');
		cnt++;
	}
	return (n_row);
}

int	get_n_column(char *str)
{
	int	n;
	int	n_column;

	n_column = 0;
	while (str[n_column] != '\n')
		n_column++;
	n = n_column + 1;
	while (str[n_column])
	{
		n_column++;
		if (str[n_column] == '\n')
			return (n_column - n);
	}
	return (-1);
}
