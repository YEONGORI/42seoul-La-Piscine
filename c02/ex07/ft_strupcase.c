/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:00:08 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/26 10:41:58 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	convert_a(char *str, int cnt)
{
	str[cnt] -= 32;
}

char	*ft_strupcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] > 96 && str[cnt] < 123)
			convert_a(str, cnt);
		else
			cnt++;
	}
	return (str);
}
