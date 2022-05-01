/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:29:57 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/19 10:52:39 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;
	int		cnt;

	alphabet = 'a';
	cnt = 0;
	while (cnt != 26)
	{
		write(1, &alphabet, 1);
		alphabet++;
		cnt++;
	}
}
