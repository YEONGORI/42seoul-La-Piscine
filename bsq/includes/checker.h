/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:23:48 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 11:24:45 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

int	is_printable(char c);
int	is_numeric(char c);
int	is_in_comp(char c, char comp[3]);

int	check_first_line(char *str, int *cursor, int pos[2], char comp[3]);
int	check_second_line(char *str, int *cursor, int data[3], char comp[3]);
int	check_other_line(char *str, int *cursor, int data[3], char comp[3]);

int	handle_last(int row, int cnt);

int	check_first(char *str, int *cursor, int data[3], char comp[3]);
int	check_second(char *str, int *cursor, int data[3], char comp[3]);
int	check_other(char *str, int *cursor, int data[3], char comp[3]);
int	check_all(char *str, int data[3], char comp[3]);

#endif
