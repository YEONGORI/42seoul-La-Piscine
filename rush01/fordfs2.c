/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fordfs2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeongki <byeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:20:43 by byeongki          #+#    #+#             */
/*   Updated: 2022/04/26 01:56:07 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	dfs_check_left(int ***arr, int n)
{
	int	h_roop_num;
	int	std_num;

	h_roop_num = 1;
	while (h_roop_num <= n)
	{
		std_num = arr[0][h_roop_num][0];
		if (dfs_check_left_roop(arr, h_roop_num, n, std_num) == 0)
			return (0);
		h_roop_num++;
	}
	return (1);
}

int	dfs_check_right_roop(int ***arr, int h_roop_num, int n, int std_num)
{
	int	only_one[20];
	int	max;
	int	see;
	int	w_roop_num;

	max = 0;
	see = 0;
	w_roop_num = n;
	only_one_init(only_one);
	while (w_roop_num >= 1)
	{
		if (++only_one[arr[0][h_roop_num][w_roop_num]] == 2)
			return (0);
		if (arr[0][h_roop_num][w_roop_num] > max)
		{
			max = arr[0][h_roop_num][w_roop_num];
			see++;
		}
		w_roop_num--;
	}
	if (std_num != see)
		return (0);
	return (1);
}

int	dfs_check_right(int ***arr, int n)
{
	int	h_roop_num;
	int	std_num;

	h_roop_num = 1;
	while (h_roop_num <= n)
	{
		std_num = arr[0][h_roop_num][n + 1];
		if (dfs_check_right_roop(arr, h_roop_num, n, std_num) == 0)
			return (0);
		h_roop_num++;
	}
	return (1);
}

int	dfs_check(int ***arr, int n)
{
	int	flag;

	flag = 1;
	flag = dfs_check_up(arr, n);
	if (flag == 0)
		return (0);
	flag = dfs_check_down(arr, n);
	if (flag == 0)
		return (0);
	flag = dfs_check_left(arr, n);
	if (flag == 0)
		return (0);
	flag = dfs_check_right(arr, n);
	if (flag == 0)
		return (0);
	return (flag);
}
