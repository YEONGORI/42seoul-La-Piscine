/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:27:46 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 10:31:23 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/reader.h"

int	get_map_len(char *file_name)
{
	int			fd;
	char		buff[1025];
	long long	total_len;

	total_len = 0;
	fd = open(file_name, O_RDONLY);
	if (fd > 0)
	{
		while (read(fd, buff, 101) > 0)
			total_len += ft_strlen(buff);
		ft_str_fill(buff, 1024, '\0');
		close(fd);
	}
	return (total_len);
}

char	*read_map(char *file_name, char **data)
{
	int	fd;
	int	size;

	size = get_map_len(file_name);
	*data = (char *) malloc((size + 1) * sizeof(char));
	if (*data == NULL)
		return (NULL);
	fd = open(file_name, O_RDONLY);
	if (fd > 0)
	{
		read(fd, *data, size);
		close(fd);
		return (*data);
	}
	else
		return (NULL);
}

void	read_standard(void)
{
	int		fd;
	char	r;

	fd = open("default", O_CREAT | O_TRUNC | O_WRONLY, 0644);
	if (fd > 0)
	{
		while (read(0, &r, 1) > 0)
		{
			write(fd, &r, 1);
			if (r == '\0')
				break ;
		}
		close(fd);
	}
}
