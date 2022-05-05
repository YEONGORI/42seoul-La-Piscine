/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 08:42:39 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 08:44:00 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_recursive(int ret)
{
	char	tmp;

	if (ret < 10)
	{
		tmp = ret + '0';
		write(1, &tmp, 1);
	}
	else
	{
		ft_recursive(ret / 10);
		ft_recursive(ret % 10);
	}
}

void	ft_print(int ret)
{
	if (ret < 0)
	{
		write(1, "-", 1);
		ret *= -1;
		ft_recursive(ret);
	}
	else
		ft_recursive(ret);
	write(1, "\n", 1);
}
