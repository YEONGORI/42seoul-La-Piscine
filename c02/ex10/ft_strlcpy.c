/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:04:25 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/25 20:53:25 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	l_src;

	cnt = 0;
	while (src[cnt] != '\0')
		cnt++;
	l_src = cnt;
	if (size == 0)
		return (l_src);
	cnt = 0;
	while (src[cnt] != '\0' && cnt < size - 1)
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	dest[cnt] = '\0';
	return (l_src);
}
