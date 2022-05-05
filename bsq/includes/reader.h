/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:05:09 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/04 14:05:59 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "ft_string.h"
# define BUFFSIZE 1024

int		get_map_len(char *file_name);
char	*read_map(char *file_name, char **data);
void	read_standard(void);
#endif
