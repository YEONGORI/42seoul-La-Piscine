/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fordfs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeongki <byeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:16:49 by byeongki          #+#    #+#             */
/*   Updated: 2022/04/24 22:26:22 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	dfs_check_up_roop(int ***arr, int w_roop_num, int n, int std_num)
{
	int	only_one[20];
	int	max;
	int	see;
	int	h_roop_num;

	max = 0;
	see = 0;
	h_roop_num = 1;
	only_one_init(only_one);
	while (h_roop_num <= n)
	{
		if (++only_one[arr[0][h_roop_num][w_roop_num]] == 2)
			return (0);
		if (arr[0][h_roop_num][w_roop_num] > max)
		{
			max = arr[0][h_roop_num][w_roop_num];
			see++;
		}
		h_roop_num++;
	}
	if (std_num != see)
		return (0);
	return (1);
}

int	dfs_check_up(int ***arr, int n)
{
	int	w_roop_num;
	int	std_num;

	w_roop_num = 1;
	while (w_roop_num <= n)
	{
		std_num = arr[0][0][w_roop_num];
		if (dfs_check_up_roop(arr, w_roop_num, n, std_num) == 0)
			return (0);
		w_roop_num++;
	}
	return (1);
}

int	dfs_check_down_roop(int ***arr, int w_roop_num, int n, int std_num)
{
	int	only_one[20];
	int	max;
	int	see;
	int	h_roop_num;

	max = 0;
	see = 0;
	h_roop_num = n;
	only_one_init(only_one);
	while (h_roop_num >= 1)
	{
		if (++only_one[arr[0][h_roop_num][w_roop_num]] == 2)
			return (0);
		if (arr[0][h_roop_num][w_roop_num] > max)
		{
			max = arr[0][h_roop_num][w_roop_num];
			see++;
		}
		h_roop_num--;
	}
	if (std_num != see)
		return (0);
	return (1);
}

int	dfs_check_down(int ***arr, int n)
{
	int	w_roop_num;
	int	std_num;

	w_roop_num = 1;
	while (w_roop_num <= n)
	{
		std_num = arr[0][n + 1][w_roop_num];
		if (dfs_check_down_roop(arr, w_roop_num, n, std_num) == 0)
			return (0);
		w_roop_num++;
	}
	return (1);
}

int	dfs_check_left_roop(int ***arr, int h_roop_num, int n, int std_num)
{
	int	only_one[20];
	int	max;
	int	see;
	int	w_roop_num;

	max = 0;
	see = 0;
	w_roop_num = 1;
	only_one_init(only_one);
	while (w_roop_num <= n)
	{
		if (++only_one[arr[0][h_roop_num][w_roop_num]] == 2)
			return (0);
		if (arr[0][h_roop_num][w_roop_num] > max)
		{
			max = arr[0][h_roop_num][w_roop_num];
			see++;
		}
		w_roop_num++;
	}
	if (std_num != see)
		return (0);
	return (1);
}
