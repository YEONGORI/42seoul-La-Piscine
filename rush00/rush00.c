/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeondle <hyeondle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 10:49:59 by hyeondle          #+#    #+#             */
/*   Updated: 2022/04/16 12:37:20 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	print_s1(int num_sen, char c_start, char c_end, char c_line)
{
	int	char_num;

	char_num = 1;
	while (char_num <= num_sen)
	{
		if (char_num == 1)
			ft_putchar(c_start);
		else if (char_num == num_sen)
			ft_putchar(c_end);
		else
			ft_putchar(c_line);
		char_num++;
	}
	ft_putchar('\n');
}

void	rush(int X, int Y)
{
	int	line_number;

	line_number = 1;
	if (X >= 1 && Y >= 1)
	{
		while (line_number <= Y)
		{
			if (line_number == 1)
				print_s1(X, 'o', 'o', '-');
			else if (line_number == Y)
				print_s1(X, 'o', 'o', '-');
			else
				print_s1(X, '|', '|', ' ');
			line_number++;
		}
	}
}
