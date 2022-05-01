/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:50:07 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/21 13:01:38 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	cnt;

	index = 0;
	cnt = 0;
	while (dest[index] != '\0')
		index++;
	while (src[cnt] != '\0')
	{
		dest[index] = src[cnt];
		index++;
		cnt++;
	}
	dest[index] = '\0';
	return (dest);
}
