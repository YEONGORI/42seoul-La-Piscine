/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:38:42 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/25 01:49:41 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 65 && str[cnt] <= 90)
			;
		else if (str[cnt] >= 97 && str[cnt] <= 122)
			;
		else
			return (0);
		cnt++;
	}
	if (cnt == 0)
		return (1);
	return (1);
}
