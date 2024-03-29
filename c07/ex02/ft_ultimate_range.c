/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:58:30 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/01 23:09:16 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	res;
	int	i;

	size = max - min;
	res = size;
	i = 0;
	if (max <= min)
		return (0);
	arr = (int *) malloc(sizeof(int) * size);
	if (arr == NULL)
		return (-1);
	while (i < size)
		arr[i++] = min++;
	*range = arr;
	return (res);
}
