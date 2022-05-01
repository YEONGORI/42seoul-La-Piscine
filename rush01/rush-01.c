/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:27:43 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/24 22:27:53 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	dfs_max(int ***arr, int n)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	if (dfs_check(arr, n) == 1)
	{
		while (a <= n)
		{
			while (b <= n)
			{
				ft_putchar(arr[0][a][b] + '0');
				if (b != n)
					ft_putchar(' ');
				b++;
			}
			ft_putchar('\n');
			b = 1;
			a++;
		}
		arr[0][1][1] = 0;
	}
}

void	dfs(int h, int w, int ***arr, int n)
{
	int	i;

	i = 0;
	if (arr[1][h][w] != 0)
	{
		if (h == n && w == n)
			dfs_max(arr, n);
		else if (w == n && h != n)
			dfs(h + 1, 1, arr, n);
		else
			dfs(h, w + 1, arr, n);
	}
	else
	{
		while (++i <= n)
		{
			arr[0][h][w] = i;
			if (h == n && w == n)
				dfs_max(arr, n);
			else if (w == n && h != n)
				dfs(h + 1, 1, arr, n);
			else
				dfs(h, w + 1, arr, n);
		}
	}
}

int	main(int argc, char **argv)
{
	int		n;
	int		***arr;

	if (argc != 2 || argv[1] == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	n = check_start(argc, argv[1]);
	if (n)
	{
		arr = third_malloc(n);
		remove_space(argv[1]);
		initiate(arr, argv[1], n);
		dfs(1, 1, arr, n);
		if (arr[0][1][1] != 0)
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
