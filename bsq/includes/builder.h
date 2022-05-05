/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builder.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:07:04 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/04 13:08:51 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILDER_H

# define BUILDER_H
# include "map.h"
# include "ft_string.h"

t_map	*build_map(char *data);
void	free_map(t_map *ori);

#endif
