/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 02:09:57 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/03 11:07:04 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (i);
		i++;
	}
	return (-1);
}

int	str_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && is_charset(str[i], charset) < 0)
		i++;
	return (i);
}

void	str_cpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && is_charset(src[i], charset) < 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	count(char *str, char *charset, int flag)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) < 0 && str[i])
		{
			flag = 1;
			i++;
		}
		else
		{
			if (flag == 1)
				cnt++;
			while (is_charset(str[i], charset) >= 0 && str[i])
			{
				if (!str[i + 1])
					return (cnt);
				i++;
			}
		}
	}
	return (cnt + 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**splitted;
	int		cnt;
	int		i;

	cnt = count(str, charset, 0);
	splitted = (char **) malloc(sizeof(char *) * (cnt + 1));
	if (!splitted)
		return (NULL);
	splitted[cnt] = NULL;
	i = 0;
	while (*str && i < cnt)
	{
		while (is_charset(*str, charset) >= 0)
			str++;
		splitted[i] = (char *) malloc(sizeof(char) * str_len(str, charset) + 1);
		if (!splitted[i])
			return (NULL);
		str_cpy(splitted[i], str, charset);
		str += str_len(str, charset);
		i++;
	}
	return (splitted);
}
