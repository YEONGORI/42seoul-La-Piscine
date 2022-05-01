/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:17:02 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/30 09:10:17 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ch_base(char *base)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	if (!base[i] || !base[i + 1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || \
				(base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		tmp = base[i];
		j = 0;
		while (base[i + j + 1])
		{
			if (tmp == base[i + j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_result(char *str, char *base, int l_base)
{
	int	result;
	int	value;

	result = 0;
	value = 0;
	while (*str)
	{
		value = is_in_base(*str, base);
		if (value == -1)
			break ;
		result = result * l_base + value;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	is_neg;
	int	result;
	int	l_base;

	is_neg = 1;
	result = 0;
	l_base = ch_base(base);
	if (!l_base)
		return (0);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_neg *= -1;
		str++;
	}
	result = ft_result(str, base, l_base);
	return (result * is_neg);
}
