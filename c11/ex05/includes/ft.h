/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 08:39:30 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 08:40:45 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		add(int num1, int num2);
int		sub(int num1, int num2);
int		div(int num1, int num2);
int		rem(int num1, int num2);
int		mul(int num1, int num2);
void	ft_print(int ret);
void	start(int num1, int id, int num2);
#endif
