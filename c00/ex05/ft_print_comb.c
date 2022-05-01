/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:54:19 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/19 10:54:32 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char *number, int trigger)
{
	write(1, number, 1);
	write(1, number + 1, 1);
	write(1, number + 2, 1);
	if (trigger != 7)
	{		
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	key_logic(int hundreds_cnt, int tens_cnt, int units_cnt, char zero)
{
	char	number[3];

	while (hundreds_cnt < 8)
	{
		tens_cnt = hundreds_cnt + 1;
		while (tens_cnt < 9)
		{
			units_cnt = tens_cnt + 1;
			while (units_cnt < 10)
			{
				number[0] = zero + hundreds_cnt;
				number[1] = zero + tens_cnt;
				number[2] = zero + units_cnt;
				print_number(number, hundreds_cnt);
				units_cnt += 1;
			}
			tens_cnt += 1;
		}
		hundreds_cnt += 1;
	}
}

void	ft_print_comb(void)
{
	int		hundreds_cnt;
	int		tens_cnt;
	int		units_cnt;
	char	zero;

	zero = '0';
	hundreds_cnt = 0;
	tens_cnt = 0;
	units_cnt = 0;
	key_logic(hundreds_cnt, tens_cnt, units_cnt, zero);
}
