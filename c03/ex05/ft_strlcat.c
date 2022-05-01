/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:36:44 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/23 23:29:06 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	append_s(char *dest, char *src, unsigned int size, unsigned int l)
{
	unsigned int	cnt;

	cnt = 0;
	while (l < size - 1 && src[cnt] != '\0')
	{
		dest[l] = src[cnt];
		l++;
		cnt++;
	}
	dest[l] = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_dest;
	unsigned int	l_src;
	unsigned int	l_total;

	l_dest = 0;
	l_src = 0;
	while (dest[l_dest] != '\0')
		l_dest++;
	while (src[l_src] != '\0')
		l_src++;
	l_total = l_dest + l_src;
	if (l_dest >= size)
		return (l_src + size);
	else
		append_s(dest, src, size, l_dest);
	return (l_total);
}
