/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:11:16 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 11:18:45 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	is_printable(char c)
{
	if (' ' <= c && c <= 126)
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	is_in_comp(char c, char comp[3])
{
	if (c == comp[0] || c == comp[1] || c == comp[2])
		return (1);
	return (0);
}

int	handle_last(int row, int cnt)
{
	if (row == cnt)
		return (1);
	return (0);
}
