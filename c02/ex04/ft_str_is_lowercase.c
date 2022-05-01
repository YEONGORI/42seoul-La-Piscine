/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:29:50 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/24 13:43:54 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] < 97 || str[cnt] > 122)
			return (0);
		else
			cnt++;
	}
	if (cnt == 0)
		return (1);
	return (1);
}
