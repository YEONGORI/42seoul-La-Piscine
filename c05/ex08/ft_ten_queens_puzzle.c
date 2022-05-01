/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:57:20 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/30 10:36:24 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arr(int *arr, int *result)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < 10)
	{
		tmp = arr[i] + '0';
		write(1, &tmp, 1);
		i++;
	}
	*result += 1;
	write(1, "\n", 1);
}

int	ft_recursive(int dep, int *arr, int pos, int *result)
{
	int	i;

	i = 1;
	while (dep - i >= 0)
	{
		if (arr[dep] == arr[dep - i] || \
				arr[dep] == arr[dep - i] + i || \
				arr[dep] == arr[dep - i] - i)
			return (0);
		i++;
	}
	if (dep - i <= -1)
		dep++;
	if (dep == 10)
	{
		print_arr(arr, result);
		return (1);
	}
	pos = 0;
	while (pos < 10)
	{
		arr[dep] = pos++;
		ft_recursive(dep, arr, pos, result);
	}
	return (*result);
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[10];
	int	result;
	int	i;

	result = 0;
	i = 0;
	ft_recursive(-1, arr, 0, &result);
	return (result);
}
