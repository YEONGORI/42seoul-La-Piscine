/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:57:55 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/23 23:28:34 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	cnt;

	index = 0;
	cnt = 0;
	while (dest[index] != '\0')
		index++;
	while (cnt < nb && src[cnt] != '\0')
	{
		dest[index] = src[cnt];
		index++;
		cnt++;
	}
	dest[index] = '\0';
	return (dest);
}
