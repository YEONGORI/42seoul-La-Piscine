/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forinit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeongki <byeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:56:21 by byeongki          #+#    #+#             */
/*   Updated: 2022/04/24 22:18:41 by byeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	init_one(int ***arr, int cnt, int n, int n_ch)
{
	if (cnt < n)
	{
		arr[0][1][n_ch] = n;
		arr[1][1][n_ch] = 1;
	}
	else if (cnt >= n && cnt < 2 * n)
	{
		arr[0][n][n_ch] = n;
		arr[1][n][n_ch] = 1;
	}
	else if (cnt >= 2 * n && cnt < 3 * n)
	{
		arr[0][n_ch][1] = n;
		arr[1][n_ch][1] = 1;
	}
	else
	{
		arr[0][n_ch][n] = n;
		arr[1][n_ch][n] = 1;
	}
}

void	init_zero_cnt_check(int ***arr, int cnt, int n, int j)
{
	if (cnt < n)
	{
		arr[0][1][j] = j;
		arr[1][1][j] = 1;
	}
	else if (cnt >= n && cnt < 2 * n)
	{
		arr[0][n][j] = j;
		arr[1][n][j] = 1;
	}
	else if (cnt >= 2 * n && cnt < 3 * n)
	{
		arr[0][j][1] = j;
		arr[1][j][1] = 1;
	}
	else
	{
		arr[0][j][n] = j;
		arr[1][j][n] = 1;
	}
}

void	init_zero(int ***arr, int cnt, int n)
{
	int	j;

	j = 1;
	while (j <= n)
	{
		init_zero_cnt_check(arr, cnt, n, j);
		j++;
	}
}

void	init_std_num(int ***arr, char *set, int n)
{
	int	i;
	int	cnt;
	int	n_ch;

	n_ch = 1;
	i = 0;
	cnt = 0;
	while (set[i])
	{
		if (cnt < n)
			arr[0][0][n_ch] = set[i] - '0';
		else if (cnt >= n && cnt < 2 * n)
			arr[0][n + 1][n_ch] = set[i] - '0';
		else if (cnt >= 2 * n && cnt < 3 * n)
			arr[0][n_ch][0] = set[i] - '0';
		else
			arr[0][n_ch][n + 1] = set[i] - '0';
		n_ch++;
		if (n_ch == n + 1)
			n_ch = 1;
		i++;
		cnt++;
	}
}

void	initiate(int ***arr, char *set, int n)
{
	int	i;
	int	cnt;
	int	n_ch;

	n_ch = 1;
	i = 0;
	cnt = 0;
	init_std_num(arr, set, n);
	while (set[i])
	{
		if (set[i] == '1')
			init_one (arr, cnt, n, n_ch);
		if (set[i] == n + '0')
			init_zero (arr, cnt, n);
		n_ch++;
		if (n_ch == n + 1)
			n_ch = 1;
		i++;
		cnt++;
	}
}
