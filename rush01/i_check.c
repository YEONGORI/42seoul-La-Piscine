/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_check.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:27:05 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/24 22:27:31 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	get_n(char len)
{
	int	sq;

	sq = (len + 1) / 8;
	return (sq);
}

int	isnt_num_or_space(char *input, int len)
{
	len = 0;
	while (input[len] != '\0')
	{
		if (len % 2 == 1)
		{
			if (input[len] != 32)
				return (1);
		}
		else
		{
			if (input[len] < 48 || input[len] > 57)
				return (1);
		}
		len++;
	}
	return (0);
}

int	check_start(int input_n, char *input)
{
	int	len;
	int	is_err;

	len = ft_strlen(input);
	is_err = 0;
	if (input_n != 2)
		is_err++;
	if (*input == '\0')
		is_err++;
	if ((len + 1) % 8 != 0)
		is_err++;
	if (len <= 14 || len >= 72)
		is_err++;
	is_err += isnt_num_or_space(input, len);
	if (is_err == 0)
		return (get_n(len));
	else
		return (0);
}
