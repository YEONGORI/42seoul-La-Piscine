/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:54:50 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/19 10:55:02 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char *number)
{
	write(1, number, 1);
	write(1, number + 1, 1);
	write(1, " ", 1);
	write(1, number + 2, 1);
	write(1, number + 3, 1);
	if (number[0] == '9' && number[1] == '8')
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	bifurcation_of_nine(char *number)
{
	if (number[1] == '9')
	{
		number[0] += 1;
		number[1] = '0';
		number[2] = number[0];
		number[3] = number[1] + 1;
	}
	else if (number[1] == '8')
	{
		number[1] += 1;
		number[2] = number[0] + 1;
		number[3] = '0';
	}
	else
	{
		number[1] += 1;
		number[2] = number[0];
		number[3] = number[1] + 1;
	}
}

void	ft_recursive(char *number)
{
	print_number(number);
	if (number[0] == '9' && number[1] == '8')
		return ;
	else if (number[2] == '9' && number[3] == '9')
		bifurcation_of_nine(number);
	else if (number[2] != '9' && number[3] == '9')
	{
		number[2] += 1;
		number[3] = '0';
	}
	else
		number[3] += 1;
	ft_recursive(number);
}

void	ft_print_comb2(void)
{
	char	number[4];

	number[0] = '0';
	number[1] = '0';
	number[2] = '0';
	number[3] = '1';
	ft_recursive(number);
}
