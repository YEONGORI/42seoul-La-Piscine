/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:44:08 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/30 20:35:02 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;

	size = max - min;
	arr = NULL;
	if (max <= min)
		return (arr);
	arr = (int *) malloc(sizeof(int) * size + 1);
	if (arr == 0)
		return (0);
	while (size > 0)
	{
		arr[size - 1] = --max;
		size--;
	}
	arr[size] = '\0';
	return (arr);
}
