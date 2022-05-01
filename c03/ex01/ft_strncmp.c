/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:43:54 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/27 08:27:42 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	if (s1[cnt] == '\0' && s2[cnt] == '\0')
		return (0);
	while (cnt < n)
	{
		if (s1[cnt] != s2[cnt])
		{
			return (s1[cnt] - s2[cnt]);
		}
		else
			cnt++;
	}
	return (0);
}
