/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:30:28 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/19 10:52:47 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;
	int		cnt;

	alphabet = 'z';
	cnt = 26;
	while (cnt != 0)
	{
		write(1, &alphabet, 1);
		alphabet--;
		cnt--;
	}
}
