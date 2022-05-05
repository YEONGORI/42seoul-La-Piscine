/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:15:54 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 11:35:16 by ji-song          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_comp(char *str, int *cursor, char comp[3], int data[2])
{
	int	i;
	int	digit;
	int	row;

	digit = 1;
	i = *cursor;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	*cursor = i;
	while (--i >= 0 && (*cursor - 3) <= i && is_printable(str[i]))
		comp[3 + i - *cursor] = str[i];
	if (*cursor - 3 <= i)
		return (-1);
	if (comp[0] == comp[1] || comp[1] == comp[2] || comp[2] == comp[0])
		return (-1);
	row = 0;
	while (i >= 0 && is_numeric(str[i]))
	{
		row += (str[i--] - '0') * digit;
		digit *= 10;
	}
	data[0] = row;
	if (i != -1)
		return (-1);
	return (1);
}

int	check_first_line(char *str, int *cursor, int data[2], char comp[3])
{
	if (check_comp(str, cursor, comp, data) < 0)
		return (-1);
	if (str[*cursor] == '\0')
		return (1);
	return (0);
}

int	check_second_line(char *str, int *cursor, int data[3], char comp[3])
{
	int	i;

	i = *cursor;
	while (str[i] != '\n' && str[i] != '\0')
	{
		if (!is_in_comp(str[i], comp))
			return (-1);
		i++;
	}
	data[1] = (i - *cursor);
	*cursor = i;
	if (str[*cursor] == '\0')
		return (1);
	return (0);
}

int	check_other_line(char *str, int *cursor, int data[3], char comp[3])
{
	int	i;

	i = *cursor;
	while (str[i] != '\n' && str[i] != '\0')
	{
		if (!is_in_comp(str[i], comp))
			return (-1);
		i++;
	}
	if ((i - *cursor) != data[1])
		return (-1);
	*cursor = i;
	if (str[*cursor] == '\0')
		return (1);
	return (0);
}
