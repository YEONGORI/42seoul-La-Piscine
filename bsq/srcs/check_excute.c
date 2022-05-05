/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_excute.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:04:36 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 11:35:39 by ji-song          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_first(char *str, int *cursor, int data[3], char comp[3])
{
	int	res;

	data[2] = 0;
	res = check_first_line(str, cursor, data, comp);
	if (res < 0)
		return (0);
	else if (res > 0)
		return (handle_last(data[0], data[2]));
	else
	{
		(*cursor)++;
		return (check_second(str, cursor, data, comp));
	}
}

int	check_second(char *str, int *cursor, int data[3], char comp[3])
{
	int	res;

	data[2] = 1;
	res = check_second_line(str, cursor, data, comp);
	if (res < 0)
		return (0);
	else if (res > 0)
		return (handle_last(data[0], data[2]));
	else
	{
		(*cursor)++;
		return (check_other(str, cursor, data, comp));
	}
}

int	check_other(char *str, int *cursor, int data[3], char comp[3])
{
	int	res;

	res = 0;
	while (res == 0)
	{
		data[2]++;
		res = check_other_line(str, cursor, data, comp);
		if (data[2] > data[0])
			return (0);
		if (res < 0)
			return (0);
		else if (res > 0)
			return (handle_last(data[0], data[2]));
		(*cursor)++;
	}
	return (-1);
}

int	check_all(char *str, int data[3], char comp[3])
{
	int	cursor;

	cursor = 0;
	return (check_first(str, &cursor, data, comp));
}
