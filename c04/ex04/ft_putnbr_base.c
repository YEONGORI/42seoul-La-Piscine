/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:23:17 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/30 15:40:17 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(long long nbr, int n, char *base)
{
	if (nbr < n)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	else
	{
		print(nbr / n, n, base);
		print(nbr % n, n, base);
	}
}

void	ch_minus(int nbr, int n, char *base)
{
	long long	nbr2;

	nbr2 = (long long)nbr;
	if (nbr < 0)
	{
		nbr2 *= -1;
		write(1, "-", 1);
		print(nbr2, n, base);
	}
	else
		print(nbr2, n, base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		j;
	int		flag;
	char	tmp;

	i = 0;
	flag = 0;
	while (base[i] && !flag)
	{
		if (base[i] == '+' || base[i] == '-')
			flag = 1;
		tmp = base[i];
		j = i;
		while (base[++j])
		{
			if (base[j] == tmp)
				flag = 1;
		}
		i++;
	}
	if (i > 1 && flag == 0)
		ch_minus(nbr, i, base);
}
