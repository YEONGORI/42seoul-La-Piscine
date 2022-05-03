/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:38:20 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/02 20:18:27 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*duped;

	i = 0;
	while (src[i])
		i++;
	duped = (char *) malloc(sizeof(char) * i + 1);
	if (duped == 0)
		return (NULL);
	i = 0;
	while (src[i])
	{
		duped[i] = src[i];
		i++;
	}
	duped[i] = '\0';
	return (duped);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	if (ac < 1)
		arr = (t_stock_str *) malloc(sizeof(t_stock_str));
	else
		arr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
