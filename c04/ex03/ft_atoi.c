/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 23:04:02 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/28 14:45:06 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_result(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

int	ch_str(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		if ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
			return (0);
		if (str[i] != '+' && str[i] != '-')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	cnt;
	int	ch_m;
	int	result;

	cnt = 0;
	ch_m = 1;
	result = 0;
	if (!ch_str(str))
		return (0);
	while (str[cnt])
	{
		if (str[cnt] == '-')
			ch_m = -1 * ch_m;
		else if (str[cnt] >= '0' && str[cnt] <= '9')
		{
			result = get_result(str + cnt);
			break ;
		}
		cnt++;
	}
	return (result * ch_m);
}
