/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:37:56 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/30 20:42:43 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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
