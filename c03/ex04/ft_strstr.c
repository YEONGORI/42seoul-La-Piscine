/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:04:01 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/21 13:35:34 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_same(char *str, char *to_find, int cnt)
{
	int	index_f;

	index_f = 0;
	while (to_find[index_f] != '\0')
	{
		if (str[cnt] != to_find[index_f])
			return (0);
		cnt++;
		index_f++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	cnt;
	int	finish;

	cnt = 0;
	finish = 0;
	if (*to_find == '\0')
		return (str);
	while (str[cnt] != '\0' && !finish)
	{
		if (str[cnt] == *to_find)
			finish = check_same(str, to_find, cnt);
		cnt++;
	}
	if (finish)
		return (str + cnt - 1);
	else
		return (0);
}
