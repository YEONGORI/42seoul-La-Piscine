/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:58:30 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/01 16:22:49 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	res;

	size = max - min;
	res = size;
	if (max <= min)
		return (0);
	arr = (int *) malloc(4 * size + 1);
	if (arr == NULL)
		return (-1);
	while (size > 0)
	{
		arr[size - 1] = size;
		size--;
	}
	*range = arr;
	return (res);
}
