/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:19:50 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/28 22:17:35 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	_ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb % 2 == 0)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (1)
	{
		if (_ft_is_prime(nb))
			return (nb);
		nb++;
	}
}
