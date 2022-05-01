/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:06:22 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/01 13:18:15 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long long	ft_atoi_base(char *str, char *base);
int			ch_base(char *base);
long long	ft_get_length(long long ret_atoi, char *base);

void	ft_itoa(long long ret_atoi, char *ret_itoa, char *base, int addidx)
{
	int			i;
	int			l_base;
	long long	l_itoa;

	i = 0;
	l_base = ch_base(base);
	l_itoa = ft_get_length(ret_atoi, base);
	while (ret_atoi / l_base > 0)
	{
		ret_itoa[l_itoa - i + addidx] = base[ret_atoi % l_base];
		ret_atoi /= l_base;
		i++;
	}
	ret_itoa[l_itoa - i + addidx] = base[ret_atoi % l_base];
}

long long	ft_get_length(long long ret_atoi, char *base)
{
	int	l_base;
	int	l_result;

	l_base = ch_base(base);
	l_result = 0;
	while (ret_atoi / l_base > 0)
	{
		ret_atoi /= l_base;
		l_result++;
	}
	return (l_result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				i;
	long long		ret_atoi;
	long long		l_itoa;
	char			*ret_itoa;

	i = 0;
	if (!ch_base(base_from) || !ch_base(base_to))
		return (NULL);
	ret_atoi = ft_atoi_base(nbr, base_from);
	if (ret_atoi < 0)
	{
		ret_atoi *= -1;
		i = 1;
	}
	l_itoa = ft_get_length(ret_atoi, base_to);
	ret_itoa = (char *) malloc(sizeof(char) * l_itoa + i + 1);
	if (ret_itoa == NULL)
		return (NULL);
	ft_itoa(ret_atoi, ret_itoa, base_to, i);
	if (i == 1)
		ret_itoa[0] = '-';
	ret_itoa[l_itoa + i + 1] = '\0';
	return (ret_itoa);
}
