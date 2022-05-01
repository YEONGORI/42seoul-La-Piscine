/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 17:33:11 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/30 22:05:56 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (i < cnt)
		size += ft_strlen(strs[i++]);
	i = 0;
	while (i < cnt - 1)
	{
		size += ft_strlen(sep);
		i++;
	}
	printf("%d\n", size);
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
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		len;
	int		i;

	i = 0;
	len = get_size(size, strs, sep);
	arr = (char *) malloc(sizeof(char) * len + 1);
	if (arr == NULL)
		return (NULL);
	while (arr[i])
		arr[i++] = '\0';
	arr[0] = '\0';
	while (i < size && len != 0)
	{
		arr = ft_strcat(arr, strs[i]);
		if (i < size - 1)
			arr = ft_strcat(arr, sep);
		printf("%s\n", strs[i]);
		i++;
	}
	return (arr);
}
