/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:53:05 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/19 10:53:22 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;
	int		cnt;

	number = '0';
	cnt = 0;
	while (cnt < 10)
	{
		write(1, &number, 1);
		number++;
		cnt++;
	}
}
