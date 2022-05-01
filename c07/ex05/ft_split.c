/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:19:22 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/01 16:26:52 by yeongele         ###   ########.fr       */
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

int	strl(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && is_charset(str[i], charset) < 0)
		i++;
	return (i);
}

void	strcpy_p(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (*src && is_charset(*src, charset) < 0)
	{
		dest[i++] = *(src++);
	}
	dest[i] = '\0';
}

int	count(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) < 0)
			i++;
		while (is_charset(str[i++], charset) >= 0)
			cnt++;
	}
	return (cnt);
}

char	**ft_split(char *str, char *charset)
{
	char	**splitted;
	int		cnt;
	int		i;

	cnt = count(str, charset);
	splitted = (char **) malloc(sizeof(char *) * cnt + 1);
	splitted[cnt] = (char *) malloc(sizeof(char) * 1);
	*splitted[cnt] = 0;
	i = 0;
	while (*str && i < cnt)
	{
		while (is_charset(*str, charset) >= 0)
			str++;
		splitted[i] = (char *) malloc(sizeof(char) * strl(str, charset) + 1);
		strcpy_p(splitted[i], str, charset);
		i++;
	}
	return (splitted);
}
