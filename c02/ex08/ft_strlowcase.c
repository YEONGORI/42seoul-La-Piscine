/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:05:44 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/24 22:47:45 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	convert(char *str, int cnt)
{
	str[cnt] += 32;
}

char	*ft_strlowcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] > 64 && str[cnt] < 91)
			convert(str, cnt);
		else
			cnt++;
	}
	return (str);
}
