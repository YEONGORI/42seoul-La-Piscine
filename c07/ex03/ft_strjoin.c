/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 04:05:47 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/02 13:53:14 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_size(int cnt, char **strs, char *sep)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (i < cnt)
	{
		size += ft_strlen(strs[i]);
		i++;
	}
	size += ((cnt - 1) * ft_strlen(sep));
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		len;
	int		i;

	i = 0;
	if (size == 0)
	{
		arr = (char *) malloc(sizeof(char));
		arr[0] = '\0';
		return (arr);
	}
	len = get_size(size, strs, sep);
	arr = (char *) malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
		return (NULL);
	arr[0] = '\0';
	while (i < size)
	{
		arr = ft_strcat(arr, strs[i]);
		if (i < size - 1)
			arr = ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}
