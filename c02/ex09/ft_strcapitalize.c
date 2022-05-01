/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:10:09 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/24 22:50:56 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_not_num_or_low(char *str, int cnt)
{
	if (str[cnt] > 64 && str[cnt] < 91)
		return (0);
	else if (str[cnt] > 96 && str[cnt] < 123)
		return (0);
	else if (str[cnt] > 47 && str[cnt] < 58)
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char	*str)
{
	int	cnt;
	int	to_upper;

	cnt = 0;
	to_upper = 1;
	while (str[cnt] != '\0')
	{
		if (to_upper && str[cnt] > 96 && str[cnt] < 123)
			str[cnt] -= 32;
		else if (!to_upper && str[cnt] > 64 && str[cnt] < 91)
			str[cnt] += 32;
		to_upper = is_not_num_or_low(str, cnt);
		cnt++;
	}
	return (str);
}
