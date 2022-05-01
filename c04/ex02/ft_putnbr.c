/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:43:39 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/27 08:34:33 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive(int nb, int trigger)
{
	char	c_convert;

	if (nb < 10)
	{
		c_convert = nb + '0';
		if (trigger == 1)
		{
			write(1, "-", 1);
		}
		write(1, &c_convert, 1);
		return ;
	}
	else
	{
		ft_recursive(nb / 10, trigger * 1);
		ft_recursive(nb % 10, trigger * 0);
	}
}

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
	{
		a = nb / 10;
		a *= -1;
		ft_recursive(a, 1);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		nb *= -1;
		ft_recursive(nb, 1);
	}
	else
		ft_recursive(nb, 0);
}
