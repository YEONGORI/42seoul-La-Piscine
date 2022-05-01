/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:25:47 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/24 22:25:57 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	***third_malloc(int n)
{
	int	***arr;
	int	floor;
	int	room;

	floor = 0;
	room = 0;
	arr = (int ***)malloc(sizeof(int **) * (2));
	while (floor < 2)
	{
		arr[floor] = (int **) malloc (sizeof(int *) * (n + 2));
		while (room < n + 2)
		{
			arr[floor][room] = (int *) malloc (sizeof(int) * (n + 2));
			room++;
		}
		room = (0);
		floor++;
	}
	return (arr);
}

void	remove_space(char *str)
{
	char	*p;
	int		i;
	int		cnt;

	i = 0;
	p = str;
	cnt = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str[cnt] = str[i];
			cnt++;
		}
		i++;
	}
	str[cnt] = '\0';
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_dfs(int ***arr, int n)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
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
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
