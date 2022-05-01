/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:17:40 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/21 19:22:44 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cnt;

	cnt = 0;
	while (s1[cnt] != '\0' || s2[cnt] != '\0')
	{
		if (s1[cnt] != s2[cnt])
		{
			if (s1[cnt] > s2[cnt])
				return (s1[cnt] - s2[cnt]);
			else
				return (s1[cnt] - s2[cnt]);
		}
		else
			cnt++;
	}
	return (0);
}
