/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:14:57 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/26 10:41:38 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	p_non_printable(unsigned char converted_str)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[converted_str / 16], 1);
	write(1, &"0123456789abcdef"[converted_str % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				cnt;
	unsigned char	*conv_s;

	cnt = 0;
	conv_s = (unsigned char *)str;
	while (conv_s[cnt] != '\0')
	{
		if (conv_s[cnt] >= 32 && conv_s[cnt] <= 126)
			write(1, conv_s + cnt, 1);
		else
			p_non_printable(conv_s[cnt]);
		cnt++;
	}
}
