/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:44:08 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/01 19:59:33 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	size = max - min;
	arr = NULL;
	i = 0;
	if (max <= min)
		return (arr);
	arr = (int *) malloc(sizeof(int) * size);
	if (arr == 0)
		return (0);
	while (i < size)
		arr[i++] = min++;
	return (arr);
}
