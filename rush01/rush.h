/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeongki <byeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:57:28 by byeongki          #+#    #+#             */
/*   Updated: 2022/04/24 22:17:30 by byeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <stdlib.h>
# include <unistd.h>

int		***third_malloc(int n);
void	remove_space(char *str);
void	ft_putchar(char c);
void	print_dfs(int ***arr, int n);
int		ft_strlen(char *str);
int		check_start(int input_n, char *input);
void	init_one(int ***arr, int cnt, int n, int n_ch);
void	init_zero_cnt_check(int ***arr, int cnt, int n, int j);
void	init_zero(int ***arr, int cnt, int n);
void	init_std_num(int ***arr, char *set, int n);
void	initiate(int ***arr, char *set, int n);
void	only_one_init(int *only_one);
int		dfs_check_up_roop(int ***arr, int w_roop_num, int n, int std_num);
int		dfs_check_up(int ***arr, int n);
int		dfs_check_down_roop(int ***arr, int w_roop_num, int n, int std_num);
int		dfs_check_down(int ***arr, int n);
int		dfs_check_left_roop(int ***arr, int h_roop_num, int n, int std_num);
int		dfs_check_left(int ***arr, int n);
int		dfs_check_right_roop(int ***arr, int h_roop_num, int n, int std_num);
int		dfs_check_right(int ***arr, int n);
int		dfs_check(int ***arr, int n);

#endif
