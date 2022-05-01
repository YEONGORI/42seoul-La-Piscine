/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:44:40 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/21 20:15:35 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	cnt;
	int	tmp;

	cnt = 0;
	tmp = 0;
	while (cnt < size / 2)
	{
		tmp = tab[cnt];
		tab[cnt] = tab[size - cnt - 1];
		tab[size - cnt - 1] = tmp;
		cnt++;
	}
}
