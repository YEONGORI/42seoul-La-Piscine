/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:55:52 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/19 10:56:12 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printf(int n, int *arr)
{
	int		cnt;
	char	convert_n;

	cnt = 0;
	while (cnt < n)
	{
		convert_n = arr[cnt] + '0';
		write(1, &convert_n, 1);
		cnt++;
	}
	if (arr[0] != 10 - n)
		write(1, ", ", 2);
}

void	edge_trigger(int end_of_number, int *arr)
{
	int	place_value;
	int	cpy;

	place_value = 0;
	while (place_value < end_of_number)
	{
		if (arr[end_of_number - place_value] == 10 - place_value)
		{
			cpy = place_value;
			arr[end_of_number - place_value - 1]++;
			while (cpy >= 0)
			{
				arr[end_of_number - cpy] = arr[end_of_number - cpy - 1] + 1;
				cpy--;
			}
		}
		place_value++;
	}
}

void	increase_end_number(int n, int *arr)
{
	int	max;
	int	end_of_number;

	max = 9;
	end_of_number = n - 1;
	while (arr[end_of_number] <= max)
	{
		ft_printf(n, arr);
		arr[end_of_number]++;
		edge_trigger(end_of_number, arr);
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];
	int	num;

	num = 0;
	while (num < n)
	{
		arr[num] = num;
		num++;
	}
	increase_end_number(n, arr);
}
