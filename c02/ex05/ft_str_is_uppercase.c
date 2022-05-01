/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:39:03 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/20 22:42:36 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] < 65 || str[cnt] > 90)
			return (0);
		else
			cnt++;
	}
	if (cnt == 0)
		return (1);
	return (1);
}
