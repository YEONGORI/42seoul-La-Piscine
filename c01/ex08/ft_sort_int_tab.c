/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:45:01 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/21 20:17:47 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx;
	int	before_idx;
	int	num_of_idx;

	idx = 1;
	while (idx < size)
	{
		before_idx = idx -1;
		num_of_idx = tab[idx];
		while (before_idx >= 0)
		{
			if (tab[before_idx] > num_of_idx)
			{
				tab[before_idx + 1] = tab[before_idx];
				tab[before_idx] = num_of_idx;
			}
			--before_idx;
		}
		idx++;
	}
}
