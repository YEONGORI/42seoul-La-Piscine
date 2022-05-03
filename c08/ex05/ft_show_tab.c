/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:54:24 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/02 20:18:40 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print(long long nbr)
{
	char	*base;

	base = "0123456789";
	if (nbr < 10)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	else
	{
		print(nbr / 10);
		print(nbr % 10);
	}
}

void	ch_minus(int nb)
{
	long long	nbr;

	nbr = (long long)nb;
	if (nb < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
		print(nbr);
	}
	else
		print(nbr);
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ch_minus(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
