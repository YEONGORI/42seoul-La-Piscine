/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:38:27 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/21 15:41:21 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		write(1, str + cnt, 1);
		cnt++;
	}
}
